; Listing generated by Microsoft (R) Optimizing Compiler Version 19.38.33145.0 

include listing.inc

INCLUDELIB LIBCMT
INCLUDELIB OLDNAMES

PUBLIC	main
pdata	SEGMENT
$pdata$main DD	imagerel $LN3
	DD	imagerel $LN3+43
	DD	imagerel $unwind$main
pdata	ENDS
xdata	SEGMENT
$unwind$main DD	010401H
	DD	02204H
xdata	ENDS
; Function compile flags: /Odtp
_TEXT	SEGMENT
b$ = 0
a$ = 4
c$ = 8
main	PROC
; File F:\computer-science\learn_c\21-07-05\add.c
; Line 2
$LN3:
	sub	rsp, 24
; Line 3
	mov	DWORD PTR a$[rsp], 1
; Line 4
	mov	DWORD PTR b$[rsp], 1
; Line 5
	mov	eax, DWORD PTR b$[rsp]
	mov	ecx, DWORD PTR a$[rsp]
	add	ecx, eax
	mov	eax, ecx
	mov	DWORD PTR c$[rsp], eax
; Line 6
	mov	eax, DWORD PTR c$[rsp]
; Line 7
	add	rsp, 24
	ret	0
main	ENDP
_TEXT	ENDS
END
