#include <stdio.h>
// &: operador de referência ou extrator de endereço
// *: operador derreferência 
int main () {
	int v[5], i;
	printf("Endereco inicial do vetor: %p\n", v);
	for (i=0;i<5; i++) {
		v[i] = i * 10;
		printf("Posicao %d, Valor %d Endereco do vetor: %p \n", i, v[i], v + i);
		printf("Posicao %d, Valor %d Endereco do vetor: %p \n", i, *(v + i), &v[i]);
		// printf("%d ", v[i]);
	} 
	printf("\n");
	return 0;
}