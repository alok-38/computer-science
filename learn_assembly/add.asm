section .text
global _start

_start:
    mov eax, 1      ; put 1 in eax
    add eax, 1      ; eax = eax + 1 (so eax = 2)

    mov ebx, eax    ; move result to ebx (exit code)
    mov eax, 1      ; syscall number for exit
    int 0x80        ; make syscall

