/*
 * busca_binaria.c
 *
 *  Created on: Aug 23, 2014
 *      Author: geraldoandradee
 *
 *
 */

#include "includes/exercicio.h"

int main() {
	int * v;
	int n, x, resultado_busca;
	srand(time(0));
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &n);
	v = (int *) malloc (n * sizeof(int));
	gera(v, n);  //esse repete alguns numeros
	mostra(v, n, "Vetor original: ");
	bubble(v, n);
	mostra(v, n, "Vetor ordenado: ");

	printf("Digite o valor a ser procurado: ");
	scanf("%d", &x);
	resultado_busca = conta_repeticoes(v, n, x);

	printf("O item %d possui %d repeticoes.\n", x, resultado_busca);

	return 0;
}

void gera(int * v, int n) {
	int i=0;
	int numero;

	while(i<n) {  // nesse caso pode repetir
		numero = rand() % 60 + 1;
		v[i] = numero;
		++i;
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

	while(ini<=fim) {
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

	return 0; // nao achou nada
}

int conta_repeticoes(int * v, int n, int x) {
	int meio, ini=0, fim=n-1, contador=0, meio_aux;

	while(ini<=fim){
		meio = (ini+fim)/2;
		meio_aux = meio;
		if (v[meio] == x) {
			meio_aux = ++meio;
			while(v[meio] == v[meio_aux]) {
				//printf("Conta mais um");
				contador++;
				meio_aux++;
			}
			meio_aux = --meio;
			while(v[meio] == v[meio_aux]) {
				//printf("Conta menos um");
				contador++;
				meio_aux--;
			}
			return contador;
		} else {
			if (x > v[meio]) {
				ini = meio + 1;
			} else {
				fim = meio -1;
			}
		}
	}

	return contador;
}
