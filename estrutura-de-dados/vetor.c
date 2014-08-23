/*
 * busca_binaria.c
 *
 *  Created on: Aug 23, 2014
 *      Author: geraldoandradee
 *
 *
 * Busca bin‡ria
 * =============
 *
 * Entradas:
 *
 * elemento a ser buscado: x
 * vetor: v
 * tamanho: n
 *
 * Sa’da:
 *
 * posicao do elemento se ele aparecer ou -1 se ele nao aparecer
 *
 */

#include "includes/vetor.h"

int main() {
	int * v;
	int n, x, resultado_busca;
	srand(time(0));
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	v = (int *) malloc (n * sizeof(int));
	gera(v, n);
	mostra(v, n, "Vetor original: ");
	bubble(v, n);
	mostra(v, n, "Vetor ordenado: ");
	printf("Digite o valor a ser procurado: ");
	scanf("%d", &x);
	resultado_busca = busca_binaria(v, n, x);

	if (resultado_busca == -1) {
		printf("Nao achei.:/ #chateado \n");
	} else {
		printf("Achei na posicao %d.\n", resultado_busca);
	}

	return 0;
}

void gera(int * v, int n) {
	int i=0;
	int numero;

	while(i<n) {
		numero = rand() % 60 + 1;
		if (!tem_repeticao(v, n, numero)) {
			v[i] = numero;
			++i;
		}
	}
}

void mostra(int * v, int n, char * msg) {
	int i;

	printf("%s ", msg);

	for (i=0;i<n;i++) {
		printf("%d ", v[i]);
	}

	printf("\n");
}

void bubble(int * v, int n) {
	int i, j;
	for (i=1;i<n;i++) {
		for (j=0;j < n-i; j ++) {
			if (v[j] > v[j + 1]) {
				troca(v, j);
			}
		}
	}
}

// implementa a troca dentro o vetor v
void troca(int * v, int pos) {
	int aux = v[pos];
	v[pos] = v[pos + 1];
	v[pos + 1] = aux;

}

/*
 * Essa funcao testa se o item j‡ existe na matriz
 *
 * int v: matriz de vetores
 * int n: numero de itens
 * int numero_gerado: pa
 **/
int tem_repeticao(int * v, int n, int numero_gerado) {
	int i = 0;
	for (i=0;i<n;++i) {
		if (v[i] == numero_gerado) {
			return 1; // ja existe
		}
	}

	return 0;  // nao tem repeticao, urru
}

int busca_binaria(int * v, int n, int x) {
	int meio, ini=0, fim=n-1;

	while(ini<=fim){
		meio = (ini+fim)/2;
		if (v[meio] == x){
			return meio;
		} else {
			if (x > v[meio]) {
				ini = meio + 1;
			} else {
				fim = meio -1;
			}
		}
	}

	return -1; // nao achou nada
}
