section .data
    message db 'Hello, Holberton', 0
    format db '%s', 10, 0

section .text
    global main

main:
    ; Set up stack frame
    push rbp
    mov rbp, rsp

    ; Call printf
    mov rdi, format
    mov rsi, message
    mov rax, 0
    call printf

    ; Clean up stack frame
    mov rsp, rbp
    pop rbp

    ; Exit
    mov rax, 0
    ret

