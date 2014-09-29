//teste.c

/* 
Passos:

1) Receber a quantidade de casos de testes;
2) Receber os casos de testes e armazenar em um vetor (vCasoTeste);
3) Chamar a função frequencia para cada letra do alfabeto passando um caso de teste como parâmetro e armazenando o resultado em um outro vetor (vPosicao);
4) Chamar a função maior_frequencia para cada caso de teste passando o vPosicao como parâmetro. Essa função precisa retornar a maior frequência, então você armazena esse número em uma variável (iMaiorFrequencia);
5) Chamar a função imprime_maior_frequencia para cada caso de teste passando o vPosicao e a varipavel iMaiorFrequencia como parâmetro. Essa função vai receber o vetor de inteiros e vai exibir todas as letras que tem o mesmo número de frequência com o mesmo valor da variável iMaiorFrequencia.

*/
#include "frequencia.h"
#include <stdio.h>
//#define T 10

int main(){
	int i, j=0, c, f;
	
	
	printf ("\nInforme o numero de casos de teste:\n");           //não terá no trabalho final
	scanf ("%d", &c);
	char v[c][200];
	printf ("\nInforme os %d casos de teste: \n", c);
	for (i=0; i<c; i++){
		printf("%d", i);
		scanf ("%s[^\n]", &v[i][j]); 
	}
	
	printf("frequencia de s e: %d", frequencia(&v[1][j], 's'));
	
	printf ("\nOs %d casos de teste informados são:\n", c);
	 for (i=0; i<c; i++){
	 	printf ("%d    %s\n", i, &v[i][j]);
	}
	return 0;
}
