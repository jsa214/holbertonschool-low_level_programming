global main

section .text

main:

	mov rax, 1		; write(
	mov rdi, 1		; STDOUT
	mov rsi, msg     	; "Hello, Holberton"
	mov rdx, 17 		; sizeof("Hello, Holberton")
	syscall 		; );

section .data

	msg:	db "Hello, Holberton", 10
