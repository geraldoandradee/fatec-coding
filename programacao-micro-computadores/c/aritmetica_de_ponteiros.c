#include <stdio.h>

int main(){
	int a[10];
	int * p;
	int i = 0;

	p = &a[0];

	for (i = 0; i < 10; i++)
	{
		printf("p + %d = %p\n", i, p+i);
		*(p + i) = 0;
	}
	printf("Conteudo do vetor: \n");

	for (i = 0; i < 10; ++i)
	{
		printf("%d, ", a[i]);
	}

	printf("\b\b.\n");

	return 0;
}

/*
 * Operações com ponteiros: soma, subtração.
 * Operações entre ponteiros: nao se pode somar ponteiros entre si mas pode-se subtrair entre si;
 */