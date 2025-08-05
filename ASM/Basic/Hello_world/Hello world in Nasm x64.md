section .data

msg: db "Hello world", 0x0A ; message + newline

section .text
global _ start

_ start:
	; write(1, msg, len)
	mov rax, 1 ; sys_write
	mov rdi, 1 ; file descriptor (1 = stdout)
	lea rsi, [rel msg] ; Pointer to message
	mov rdx, 12 ; 12 bytes to write to stdout
	syscall ; invoke the kernel
	; exit(0)
	mov rax, 60 ; sys_exit
	xor rdi, rdi ; status 0
	syscall

fetch - decode - execute

code in sections
don't automatize anything, code execute in sections so it isn't a function at all.

Don't abstract or suppose any part of the code, NASM is totally manual

Registers are places we can store numbers

