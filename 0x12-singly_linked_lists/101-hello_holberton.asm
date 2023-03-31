global main

extern printf

section .data
	message db 'Hello, Holberton', 10, 0

section .text
main:
	lea rdi, [rel message]
	xor rax, rax
	call printf

	xor rdi, rdi
	mov rax, 60
	syscall

