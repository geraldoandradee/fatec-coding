# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define T 100000		// CONSTANTE DEFINIDA PARA A QUANTIDADE DE ITENS GERADOS NO VETOR

void gera_vetor_crescente(int *, int);
void gera_vetor_decrescente(int *, int);
void gera (int *, int);		// FUNCAO CRIADA PARA GERAR O VETOR
void bubble (int *, int, float *, float *);	// FUNCAO CRIADA PARA ORDENAR O VETOR UTILIZANDO O ALGORITMO "BUBBLE SORT"
void troca (int *, int);	// FUNCAO CRIADA PARA TROCAR A POSICAO E ORDENAR O VETOR "..."
void insertionSort (int *, int, float *, float *);	// FUNCAO CRIADA PARA ORDENAR O VETOR UTILIZANDO O ALGORITMO "INSERTION SORT"
void selection (int *, int, float *, float *);	// FUNCAO CRIADA PARA ORDENAR O VETOR UTILIZANDO O ALGORITMO "SELECTION SORT"
void trocaAnterior (int *, int);	// FUNCAO CRIADA PARA TROCAR A POSICAO E ORDENAR O VETOR "..."
void trocaMinimo (int *, int, int);	// FUNCAO CRIADA PARA TROCAR A POSICAO E ORDENAR O VETOR "..."