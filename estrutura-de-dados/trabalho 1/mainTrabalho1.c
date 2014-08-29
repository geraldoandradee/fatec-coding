# include "trabalho1.h"

int main () {
	int *v;
	srand (time(0));
	
	//printf ( "\nDigite o tamanho do vetor: " );
	//scanf ( "%d", &n );
	
	v = ( int * ) malloc ( T * sizeof(int));
	
	gera (v, T);
	mostra (v, T, "Vetor original:");
	
	//bubble (v, n);
	
	bubbleSort (v, T);
	mostra (v, T, "Vetor ordenado:");
	
	bubbleSort (v, T);
	mostraInvertido (v, T, "Vetor ordenado ao contrario:");
	
	return 0;
	
}
