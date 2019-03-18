global _start

section .text

_start:
	mov rax, 1		; write(
	mov rdi, 1		; 
	mov rsi, message	; "Hello, Holberton\n"
	mov rdx, 17		; sizeof("Hello, Holberton\n")
	syscall 		; );

section .data

	message db "Hello, Holberton\n", 10
