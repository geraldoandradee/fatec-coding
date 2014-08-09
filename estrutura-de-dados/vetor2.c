#include <stdio.h>
#include <stdlib.h>

/*
	Esse tipo de comportamento de estouro de vetor é completamente imprevisível e depende de SO, sistema operacional e outros fatores.
*/

int main() {
	int v[10], i;
	// int v[100000000000], i; // simulando o erro de declaração de vetor

	for (i=0;i<100; i++) { //estourando o vetor
		// v[i] = i*10;
		v[i] = 5;
		// printf("%d ", v[i]);
		printf("%d %p \n", v[i], v +i);
	}

	return 0;
}