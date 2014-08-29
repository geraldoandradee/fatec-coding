# include "trabalho1.h"   // INCLUI A BIBLIOTECA ou HEADER trabalho.h A EXECUCAO DO PROGRAMA

/* FUNCAO UTILIZADA PARA GERAR UM VETOR DE N�MEROS ALEAT�RIOS */
void gera (int *v, int n){
	int i;
	for ( i= 0; i < n; i++ ){
		v[i] = rand();
	}
}


/* FUN��O UTILIZADA PARA MOSTRAR O VETOR NA TELA  */
void mostra (int *v, int n, char *msg){
	int i;
	printf ( "\n%s\n\n", msg );
	for ( i = 0; i < n; i++ ){
		printf ( "%d ", v[i]);
	}
	
	printf ("\n");
	
}


/* FUN��O UTILIZADA PARA MOSTRAR O VETOR "ORDENADO AO CONTR�RIO" NA TELA */
void mostraInvertido (int *v, int n, char *msg){
	int i = 0;
	printf ( "\n%s\n\n", msg );
	for ( i = n - 1; i >= 0; i-- ){		// colocado n - 1 para corre��o do "primeiro item invertido"
		printf ( "%d ", v[i]);
	}
	
	printf ("\n");
	
}


/* FUN��O UTILIZADA PARA ORDENAR O VETOR UTILIZANDO O ALGOR�TMO "BUBBLE SORT" */
void bubble (int *v, int n){
	int i, j;
	for ( i = 1; i < n; i++ ){
		for ( j = 0; j < n - i; j++ ){
			if (v[j] > v[j+1]){
				troca (v, j);
			}
		}
	}
	
}


/* FUN��O UTILIZADA PARA TROCAR A POSI��O E ORDENAR O VETOR "..." */     // MELHORAR A DESCRI��O <<<<<<<<<<<
void troca (int *v, int pos){

	int aux = v[pos];
	v[pos] = v[pos+1];
	v[pos+1] = aux;
	
}


/* FUN��O UTILIZADA PARA TROCAR A POSI��O E ORDENAR O VETOR "..." */	// MELHORAR A DESCRI��O <<<<<<<<<<<<
void trocaProximo (int *v, int pos){

	int aux 		= v[pos];
		v[pos]		= v[pos + 1];
		v[pos + 1]	= aux;
	
}


/* FUN��O UTILIZADA PARA TROCAR A POSI��O E ORDENAR O VETOR "..." */	// MELHORAR A DESCRI��O <<<<<<<<<<<
void trocaAnterior (int *v, int pos){

	int aux 		= v[pos];
		v[pos]		= v[pos - 1];
		v[pos - 1]	= aux;
	
}


/* FUN��O UTILIZADA PARA TROCAR A POSI��O E ORDENAR O VETOR "..." */	// MELHORAR A DESCRI��O <<<<<<<<<<<
void trocaMinimo (int *v, int pos){
	
	int min;
	int aux 		= v[min];
		v[min]		= v[pos];
		v[pos]		= aux;
	
}


/* FUN��O UTILIZADA PARA ORDENAR O VETOR UTILIZANDO O ALGOR�TMO "BUBBLE SORT" */
void bubbleSort (int *v, int n){
	
	int i, j;
	
	for ( i = 1; i < n; i++ ){
	
		for ( j = 0; j < n - i; j++ ){
			
			if (v[j] > v[j+1]){
				trocaProximo (v, j);
			}
		}
	}
	
}


/* FUN��O UTILIZADA PARA ORDENAR O VETOR UTILIZANDO O ALGOR�TMO "INSERTION SORT" */
void insertionSort (int *v, int n){

	int i, j, key;

	for ( i = 1; i < n; i++ ){
		
		key = v[i];

		while ( i > 0 && v[i -1] > key ){
			
			trocaAnterior (v, j);
			/*
			j 			= v[i];
			v[i] 		= v[i -1];
			v[i -1] 	= j;
			*/
			
			--i;
		}
	}
}


/* FUN��O UTILIZADA PARA ORDENAR O VETOR UTILIZANDO O ALGOR�TMO "SELECTION SORT" */
void selection (int *v, int n){
	
	int i, j, x, min, k;
	
	for ( i = 0; i < n; i++ ){
	
		min = i;
		
		for ( j = i + 1; j < (n - i)	; j++ ){
			
			if (v[min] > v[j]){
				min = j;
			}
			
			trocaMinimo (v, j);
			/*
			x 		= v[min];
			v[min]	= v[j];
			v[j] 	= x;
			*/
		}
	}
	
}


/* FUN��O UTILIZADA PARA ORDENAR O VETOR UTILIZANDO O ALGOR�TMO "BUBBLE SORT" */
int busca_binaria (int *v, int n, int x){

	int meio, ini = 0, fim = n - 1;

	while ( ini < fim ){
		meio = ( ini + fim ) / 2;
		
		if ( v[meio] == x ) {
			return meio;
		}
		
		if ( x > v[meio] ){
			ini = meio + 1;
		} 
		else {
			fim = meio - 1;
		}
	}
	
	return -1;
	
}
