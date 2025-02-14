;hello.asm
section .data
    text db "hello, world!", 0x0A ; null terminated string

section .bss
section .text
    global _start

_start:

    ; Write 'Hello, world! to stdout (file descriptor 1)'
    ; sys_write(1, text, 14)
    mov     rax, 1      ; syscall numer for sys_write
    mov     rdi, 1      ; file descriptor 1 (stdout)
    mov     rsi, main  ; pointer to string to write
    mov     rdx, 15     ; lenght of the string
    syscall             ; invoke the system call
    
    ; exit the program (sys_exit(0))
    mov     rax, 60     ; syscall number for sys_exit
    mov     rdi, 0      ; return code 0
    syscall             ; invoke the system call
        
