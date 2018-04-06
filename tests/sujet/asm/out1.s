.file ""
.text
.globl main
.type main, @function
main:
	pushq %rbp
	movq %rsp, %rbp
	subq $8, %rsp
	BDEBUT_0:
		jmp BFINCFG_1
	BFINCFG_1:
	leave
	ret
