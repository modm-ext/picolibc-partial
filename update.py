import sys
import json
import glob
import shutil
import subprocess
from pathlib import Path
import urllib.request

source_paths = [
    "semihost/**/*.[chSs]",
    "newlib/libc/**/*.[chSs]",
    "newlib/libm/**/*.[chSs]",
    "COPYING.*",
]

with urllib.request.urlopen("https://api.github.com/repos/picolibc/picolibc/releases/latest") as response:
   tag = json.loads(response.read())["tag_name"]

# clone the repository
if "--fast" not in sys.argv:
    print("Cloning Picolibc repository...")
    shutil.rmtree("picolibc_src", ignore_errors=True)
    subprocess.run("git clone --depth=1 --branch {} ".format(tag) + \
                   "https://github.com/picolibc/picolibc.git picolibc_src", shell=True)

# remove the sources in this repo
shutil.rmtree("newlib", ignore_errors=True)
shutil.rmtree("semihost", ignore_errors=True)

print("Copying Picolibc sources...")
paths = []
for pattern in source_paths:
    for path in Path("picolibc_src").glob(pattern):
        dest = path.relative_to("picolibc_src")
        dest.parent.mkdir(parents=True, exist_ok=True)
        paths.append(str(dest))
        print(dest)
        # Copy, normalize newline and remove trailing whitespace
        with path.open("r", newline=None, encoding="utf-8", errors="replace") as rfile, \
                    dest.open("w", encoding="utf-8") as wfile:
            wfile.writelines(l.rstrip()+"\n" for l in rfile.readlines())

subprocess.run("git add newlib semihost COPYING.GPL2 COPYING.NEWLIB COPYING.picolibc", shell=True)
if subprocess.call("git diff-index --quiet HEAD --", shell=True):
    subprocess.run('git commit -m "Update PicoLibc to v{}"'.format(tag), shell=True)
