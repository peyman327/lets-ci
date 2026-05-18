	.file	"even_or_odd.c"
	.text
	.section .rdata,"dr"
.LC0:
	.ascii "Voer een getal in: \0"
.LC1:
	.ascii "%d\0"
.LC2:
	.ascii "Het getal is even.\0"
	.align 8
.LC3:
	.ascii "Alle even getallen tot en met %d:\12\0"
.LC4:
	.ascii "%d \0"
.LC5:
	.ascii "Het getal is oneven.\0"
	.align 8
.LC6:
	.ascii "Alle oneven getallen tot en met %d:\12\0"
	.text
	.globl	main
	.def	main;	.scl	2;	.type	32;	.endef
	.seh_proc	main
main:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	call	__main
	leaq	.LC0(%rip), %rax
	movq	%rax, %rcx
	call	printf
	leaq	-12(%rbp), %rax
	leaq	.LC1(%rip), %rcx
	movq	%rax, %rdx
	call	scanf
	movl	-12(%rbp), %eax
	andl	$1, %eax
	testl	%eax, %eax
	jne	.L2
	leaq	.LC2(%rip), %rax
	movq	%rax, %rcx
	call	puts
	movl	-12(%rbp), %eax
	leaq	.LC3(%rip), %rcx
	movl	%eax, %edx
	call	printf
	movl	$0, -4(%rbp)
	jmp	.L3
.L4:
	movl	-4(%rbp), %eax
	leaq	.LC4(%rip), %rcx
	movl	%eax, %edx
	call	printf
	addl	$2, -4(%rbp)
.L3:
	movl	-12(%rbp), %eax
	cmpl	%eax, -4(%rbp)
	jle	.L4
	jmp	.L5
.L2:
	leaq	.LC5(%rip), %rax
	movq	%rax, %rcx
	call	puts
	movl	-12(%rbp), %eax
	leaq	.LC6(%rip), %rcx
	movl	%eax, %edx
	call	printf
	movl	$1, -8(%rbp)
	jmp	.L6
.L7:
	movl	-8(%rbp), %eax
	leaq	.LC4(%rip), %rcx
	movl	%eax, %edx
	call	printf
	addl	$2, -8(%rbp)
.L6:
	movl	-12(%rbp), %eax
	cmpl	%eax, -8(%rbp)
	jle	.L7
.L5:
	movl	$10, %ecx
	call	putchar
	movl	$0, %eax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	__main;	.scl	2;	.type	32;	.endef
	.ident	"GCC: (MinGW-W64 x86_64-ucrt-posix-seh, built by Brecht Sanders, r5) 15.2.0"
	.def	printf;	.scl	2;	.type	32;	.endef
	.def	scanf;	.scl	2;	.type	32;	.endef
	.def	puts;	.scl	2;	.type	32;	.endef
	.def	putchar;	.scl	2;	.type	32;	.endef
