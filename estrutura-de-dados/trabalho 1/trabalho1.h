# include <stdio.h>
# include <stdlib.h>
# include <time.h>

# define T 100		// CONSTANTE DEFINIDA PARA A QUANTIDADE DE ITENS GERADOS NO VETOR

void gera (int *, int);		// FUNCAO CRIADA PARA GERAR O VETOR
void mostra (int *, int, char *);	// FUNCAO CRIADA PARA MOSTRAR O VETOR GERADO
void mostraInvertido (int *, int, char *);	// FUNCAO CRIADA PARA MOSTRAR O VETOR GERADO "ORDENADO AO CONTRARIO"
void bubble (int *, int);	// FUN��O CRIADA PARA ORDENAR O VETOR UTILIZANDO O ALGOR�TMO "BUBBLE SORT"
void bubbleSort (int *, int);	// FUN��O CRIADA PARA ORDENAR O VETOR UTILIZANDO O ALGOR�TMO "BUBBLE SORT"
void insertionSort (int *, int);	// FUN��O CRIADA PARA ORDENAR O VETOR UTILIZANDO O ALGOR�TMO "INSERTION SORT"
void selectionSort (int *, int);	// FUN��O CRIADA PARA ORDENAR O VETOR UTILIZANDO O ALGOR�TMO "SELECTION SORT"
void troca (int *, int);	// FUN��O CRIADA PARA TROCAR A POSI��O E ORDENAR O VETOR "..."      // MELHORAR A DESCRI��O <<<<<<<<<<<	
void trocaProximo (int *, int);	// FUN��O CRIADA PARA TROCAR A POSI��O E ORDENAR O VETOR "..."      // MELHORAR A DESCRI��O <<<<<<<<<<<
void trocaAnterior (int *, int);	// FUN��O CRIADA PARA TROCAR A POSI��O E ORDENAR O VETOR "..."      // MELHORAR A DESCRI��O <<<<<<<<<<<
void trocaMinimo (int *, int);	// FUN��O CRIADA PARA TROCAR A POSI��O E ORDENAR O VETOR "..."      // MELHORAR A DESCRI��O <<<<<<<<<<<
int buscaBinaria (int *, int, int);
int tem_repeticao(int *, int , int);
