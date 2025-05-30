all:
	gcc prob5.c -o prob5 -std=c99
	gcc -E prob5.c > prob5.i 
	gcc -S -masm=intel prob5.i
	as -o prob5.o prob5.s
	objdump -M intel -d prob5.o > prob5.dump



