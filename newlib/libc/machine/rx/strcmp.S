/*
Copyright (c) 2009 Nick Clifton <nickc@redhat.com>
 */
#include <picolibc.h>

#ifdef __RX_ALLOW_STRING_INSNS__

	.file	"strcmp.S"

	.section .text.strcmp

	.global  _strcmp
	.type	 _strcmp,@function
_strcmp:
	mov	#-1, r3		; Strictly speaking this is incorrect, but I doubt if anyone will ever know.
	scmpu			; Perform the string comparison
	bnc	1f		; If Carry is not set skip over
	scne.L	r1		; Set result based on Z flag
	rts			;
1:				;
	mov	#-1,r1		; Carry not set, result should be negative
	rts			;
	.size _strcmp, . - _strcmp
#endif

