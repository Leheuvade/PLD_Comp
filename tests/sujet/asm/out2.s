.file ""
.text
.globl main
.type main, @function
main:
	pushq %rbp
	movq %rsp, %rbp
	subq $32, %rsp
	BDEBUT_0:
		jmp BFINCFG_1
	BFINCFG_1:
	leave
	ret
