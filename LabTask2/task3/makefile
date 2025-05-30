all:
	gcc prob3.c -o prob3 -std=c99
	gcc -E prob3.c > prob3.i 
	gcc -S -masm=intel prob3.i
	as -o prob3.o prob3.s
	objdump -M intel -d prob3.o > prob3.dump



