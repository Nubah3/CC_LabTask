all:
	gcc prob6.c -o prob6 -std=c99
	gcc -E prob6.c > prob6.i 
	gcc -S -masm=intel prob6.i
	as -o prob6.o prob6.s
	objdump -M intel -d prob6.o > prob6.dump



