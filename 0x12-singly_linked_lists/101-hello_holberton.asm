section .text
	global _start

_start:
	mov rax, 1
	mov rdi, 1
	mov rsi, msg
	mov rdx, 13
	syscall
	
	mov rax, 60
	mov rdi, 0
	syscall
	
section .data
	msg db "Hello, Holberton",0xa ; also 10
	len equ $ -msg