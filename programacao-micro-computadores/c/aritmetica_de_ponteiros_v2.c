#include <stdio.h>

int main(){
	int a[10];
	int * p;
	int i = 0;

	p = a; // inicializa o ponteiro, um array é um ponteiro que aponta para o primeiro elemento

	for (i = 0; i < 10; i++)
	{
		printf("p[%d] = %p\n", i, &p[i]);
		//&p[i] == &*(p + i) == p +i
		p[i] = 0; // *(p + i)
	}
	printf("p - a = %d\n", p - a); // valida
//	printf("p + &a[0] = %p\n\n", p + &a[0]); //erro

	printf("Conteudo do vetor: \n");
	for (i = 0; i < 10; ++i)
	{
		printf("%1lf, ", *(a + i));
	}

	printf("\b\b.\n");

	return 0;
}

/*
 * Operações com ponteiros: soma, subtração.
 * Operações entre ponteiros: nao se pode somar ponteiros entre si mas pode-se subtrair entre si;
 */