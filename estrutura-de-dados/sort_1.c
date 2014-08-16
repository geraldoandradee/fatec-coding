/*
	Geração de números aleatórios
	em C:
		rand(): gera números entre 0 e RAND_MAX (no stdlib.h)
		srand(semente): initica o gerador. a semente deve ser sempre diferente (usaremos o time).
		time(0): tempo da bios em segundos

		stdlib.h
		time.h

	Revisar comportamento de variáveis dinâmicas e estáticas na memória;

	===========
	BUBBLE SORT
	===========

	Matematica das iterações do bubble sort (1 + n). n/2  ==  (n+(n.n)) / 2

	Pos comp: compiladores e análises de algoritmos


	Estudo de pos incrementos ou decrementos:

	int = 10;

	printf("%d", n++); // TELA: 10; RAM: 11
	printf("%d", ++n); // TELA: 11; RAM: 11
	printf("%d", n+1); // TELA: 10; RAM: 11


*********/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define T 10

void gera(int *, int);
void mostra(int *, int, char *);
void bubble(int *, int);
void troca(int *, int);

int main() {

	int v[T];
	srand(time(0));
	gera(v, T);
	mostra(v, T, "Vetor original");
	bubble(v, T);
	mostra(v, T, "Vetor Ordenado");
	return 0;
}

void gera(int * v, n) {
	int i;
	for (i=0;i<n;i++) {
		v[i] = rand();
	}
}

void mostra(int * v, int n, char * msg) {
	int i;

	printf("%s\n", msg);

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




// int main () {
// 	//time_t tempo = time(0);

// 	//printf("%s\n", );
// 	srand(time(0));
// 	int n = rand();
// 	int m = rand();
// 	printf("O valor de n %d\n", n);
// 	printf("O valor de m %d\n", m);

// 	return 0;
// }
