//teste.c

/* 
Passos:

1) Receber a quantidade de casos de testes;
2) Receber os casos de testes e armazenar em um vetor (vCasoTeste);
3) Chamar a fun��o frequencia para cada letra do alfabeto passando um caso de teste como par�metro e armazenando o resultado em um outro vetor (vPosicao);
4) Chamar a fun��o maior_frequencia para cada caso de teste passando o vPosicao como par�metro. Essa fun��o precisa retornar a maior frequ�ncia, ent�o voc� armazena esse n�mero em uma vari�vel (iMaiorFrequencia);
5) Chamar a fun��o imprime_maior_frequencia para cada caso de teste passando o vPosicao e a varipavel iMaiorFrequencia como par�metro. Essa fun��o vai receber o vetor de inteiros e vai exibir todas as letras que tem o mesmo n�mero de frequ�ncia com o mesmo valor da vari�vel iMaiorFrequencia.

*/
#include "frequencia.h"
#include <stdio.h>
//#define T 10

int main(){
	int i, j=0, c, f;
	
	
	printf ("\nInforme o numero de casos de teste:\n");           //n�o ter� no trabalho final
	scanf ("%d", &c);
	char v[c][200];
	printf ("\nInforme os %d casos de teste: \n", c);
	for (i=0; i<c; i++){
		printf("%d", i);
		scanf ("%s[^\n]", &v[i][j]); 
	}
	
	printf("frequencia de s e: %d", frequencia(&v[1][j], 's'));
	
	printf ("\nOs %d casos de teste informados s�o:\n", c);
	 for (i=0; i<c; i++){
	 	printf ("%d    %s\n", i, &v[i][j]);
	}
	return 0;
}
