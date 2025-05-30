all:
	gcc prob1.c -o prob1 -std=c99
	gcc -E prob1.c > prob1.i 
	gcc -S -masm=intel prob1.i
	as -o prob1.o prob1.s
	objdump -M intel -d prob1.o > prob1.dump