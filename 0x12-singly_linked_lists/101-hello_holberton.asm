section .data
    format db "Hello, Holberton", 0
    newline db 10, 0

section .text
    extern printf

global main
main:
    sub rsp, 8
    mov edi, format
    xor eax, eax
    call printf
    mov edi, newline
    call printf
    add rsp, 8
    xor eax, eax
    ret

