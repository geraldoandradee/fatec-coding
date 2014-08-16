/* Geracao de numeros da megasena */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 6

void gera(int *, int);
void gera_sem_repeticao(int *, int);
int tem_repeticao(int *, int , int);
void mostra(int *, int, char *);
void bubble(int *, int);
void troca(int *, int);
int busca(int *, int);

int main() {
	int v[T];
	srand(time(0));
	gera_sem_repeticao(v, T);
	bubble(v, T);
	mostra(v, T, "Resultado: ");
	return 0;
}

void gera(int * v, n) {
	int i;
	for (i=0;i<n;i++) {
		v[i] = rand() % 60 + 1;
	}
}

void gera_sem_repeticao(int * v, n) {
	int i=0;
	int numero;

	while(i<n) {
		numero = rand() % 60 + 1;
		printf("gerado numero: %d \n", numero);

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
			printf("Ja existe %d \n", numero_gerado);
			return 1; // ja existe
		} else {
			printf("Nao existe %d \n", numero_gerado);
		}
	}

	return 0;  // nao tem repeticao, urru
}
