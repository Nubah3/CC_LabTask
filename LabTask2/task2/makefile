all:
	gcc prob2.c -o prob2 -std=c99
	gcc -E prob2.c > prob2.i 
	gcc -S -masm=intel prob2.i
	as -o prob2.o prob2.s
	objdump -M intel -d prob2.o > prob2.dump



