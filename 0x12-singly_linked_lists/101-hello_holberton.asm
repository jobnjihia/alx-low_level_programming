	extern	printf		; to be called

	        section .data		; initialized variables
msg:		db "Hello, Holberton", 0 ; C string needs 0
fmt:	    	db "%s", 10, 0          ; printf format, "\n",'0'

	        section .text		; Code section.

	        global main		; gcc entry point
main:					; program entry point
	        push    rbp		; set up stack frame

		mov	rdi,fmt
		mov	rsi,msg
		mov	rax,0		; or can be
	        call    printf		; Call C function

		pop	rbp		; restore stack

		mov	rax,0		; return value
		ret			; return
