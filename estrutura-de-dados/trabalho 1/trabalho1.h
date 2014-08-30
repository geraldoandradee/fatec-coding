# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define T 100000		// CONSTANTE DEFINIDA PARA A QUANTIDADE DE ITENS GERADOS NO VETOR

void gera (int *, int);		// FUNCAO CRIADA PARA GERAR O VETOR
void mostra (int *, int, char *);	// FUNCAO CRIADA PARA MOSTRAR O VETOR GERADO
void mostraInvertido (int *, int, char *);	// FUNCAO CRIADA PARA MOSTRAR O VETOR GERADO "ORDENADO AO CONTRARIO"
void bubble (int *, int);	// FUNCAO CRIADA PARA ORDENAR O VETOR UTILIZANDO O ALGORITMO "BUBBLE SORT"
void bubbleSort (int *, int);	// FUNCAO CRIADA PARA ORDENAR O VETOR UTILIZANDO O ALGORITMO "BUBBLE SORT"
void insertionSort (int *, int);	// FUNCAO CRIADA PARA ORDENAR O VETOR UTILIZANDO O ALGORITMO "INSERTION SORT"
void selectionSort (int *, int);	// FUNCAO CRIADA PARA ORDENAR O VETOR UTILIZANDO O ALGORITMO "SELECTION SORT"
void troca (int *, int);	// FUNCAO CRIADA PARA TROCAR A POSICAO E ORDENAR O VETOR "..."
void trocaProximo (int *, int);	// FUNCAO CRIADA PARA TROCAR A POSICAO E ORDENAR O VETOR "..."
void trocaAnterior (int *, int);	// FUNCAO CRIADA PARA TROCAR A POSICAO E ORDENAR O VETOR "..."
void trocaMinimo (int *, int);	// FUNCAO CRIADA PARA TROCAR A POSICAO E ORDENAR O VETOR "..."
int buscaBinaria (int *, int, int);
int tem_repeticao(int *, int , int);
void gera_vetor_crescente(int *, int);
void gera_vetor_decrescente(int *, int);
