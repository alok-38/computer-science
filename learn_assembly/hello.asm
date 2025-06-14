section .data
    msg db "Hello, world!", 10      ; the message plus newline (ASCII 10)

section .text
global _start

_start:
    mov rax, 1          ; syscall number for sys_write
    mov rdi, 1          ; file descriptor 1 = stdout
    mov rsi, msg        ; pointer to message
    mov rdx, 14         ; message length (13 chars + newline)
    syscall             ; make syscall

    ; exit program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; exit code 0
    syscall

