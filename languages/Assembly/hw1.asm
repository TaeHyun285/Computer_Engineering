.globl main

main:
	li t0, 0
	li t1, 1
	li t2, 20
loop:

	bgt t1, t2, next_r
	add t0, t0, t1
	addi t1, t1, 1

	j loop

next_r:

    li a7, 10
    ecall
