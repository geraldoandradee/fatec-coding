#include <stdio.h>

// baixo acoplamento
// alta coesao

int main() {
	int i, j = 0;
	int novo = 5;
	int lista[10] = {2,4,6,8,10};
	int posicao_ultimo_item = 10;

	for (i=0;i<=posicao_ultimo_item && lista[i] < novo;i++) { // busca
		for (j=posicao_ultimo_item+1;j>i;j--) { // deslocamento
			lista[j] = lista[j-1];
		}

	}

	printf("Agora vamos imprimir o vetor: \n");
	for (i=0;i<=10;i++) {
		printf("%d\n", lista[i]);
	}
	return 0;
}