section .text
global main

main:

    mov rax, 1
    mov rdi, 1
    mov rsi, mesg
    mov rdx, msglen
    syscall

	mov rax, 60
mov rdi, 0
