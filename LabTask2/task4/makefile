all:
	gcc prob4.c -o prob4 -std=c99
	gcc -E prob4.c > prob4.i 
	gcc -S -masm=intel prob4.i
	as -o prob4.o prob4.s
	objdump -M intel -d prob4.o > prob4.dump



