# include "trabalho1.h"   // INCLUI A BIBLIOTECA ou HEADER trabalho.h A EXECUCAO DO PROGRAMA


int main() {
	printf("\nGerando o vetor aleatorio...\n");
	int vetor_aleatorio[T];
	int vetor_desc[T];
	int vetor_asc[T];

	gera(vetor_aleatorio, T);
	printf("Vetor aleatorio gerado \n");

	gera_vetor_decrescente(vetor_desc, T);
	printf("Vetor descrescente gerado \n");
//
//	gera_vetor_crescente(vetor_asc, T);
//	printf("Vetor crescente gerado \n");

//
//	int comparacaoBubble = 0;
//	int ordenacaoBubble = 0;
//
//	printf("Agora vamos ordenar o vetor em ordem crescente");
//	int comparacaoInsertion = 0;
//	int ordenacaoInsertion = 0;
//
//	printf("Agora vamos ordenar o vetor em ordem decrescente");
//
//	printf("Agora vamos ordenar o vetor de modo crescente");
	return 0;
}

void gera_vetor_decrescente(int * vetor, int n) {
	int i=0;
	for(i=n;i>0;--i) {
		vetor[i] = i;
	}
}

void gera_vetor_crescente(int * vetor, int n) {
	int i=0;
	for(i=0;i<n;i++) {
		vetor[i] = i;
	}
}

/*
 * Essa funcao testa se o item já existe na matriz
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

/* FUNCAO UTILIZADA PARA GERAR UM VETOR DE N�MEROS ALEAT�RIOS */
void gera (int *v, int n){
	int i=0;
	int numero;

	while(i<n) {
		numero = rand();
		if (!tem_repeticao(v, n, numero)) {
			v[i] = numero;
			++i;
		}
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
