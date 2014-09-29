// main.c

#include "frequencia.h"
#include <stdio.h>
#include <string.h>
// #include <ctype.h>

// int frequencia(char *, char);
// int maior_frequecia(int [], int);	
// void imprime_mais_frequente(int [], int, int);

int main(){
  	int quantidade_de_sentencas, i;

	printf("Forneca a quantidade de sentencas: \n");
	scanf("%d", &quantidade_de_sentencas); 
	// vamos declarar o vetor para armazenar as sentencas
	char sentencas[quantidade_de_sentencas][COMPRIMENTO_MAXIMO];

	// agora que ja temos onde armazenar as sentencas vamos pega-las
	for (i=0;i<=quantidade_de_sentencas;i++) {
		printf("Entre com a frase ou palavra: ");
		fgets(sentencas[i], COMPRIMENTO_MAXIMO, stdin);
	}

	for (i=0;i<=quantidade_de_sentencas;i++) {
		puts(sentencas[i]);
	}

 //  int v[LETRAS_ALFABETO];
 //  int texto, i, j;
 //  printf("Informe uma linha de texto: ");
	// scanf("%120[^\n]", texto);
	
	// for (i = 0; texto[i] != '\0'; i++) {
	// 	for (j = 0; j < 5; j++) {
	// 		if (tolower(texto[i]) == LETRAS_ALFABETO[j]) {
	// 			cont[j]++;
	// 			break;
	// 		}
	// 	}
	// }
	// printf("\nHistograma de frequência das vogais:\n");
	// for (i = 0; i < 5; i++) {
	// 	printf("%c: ", LETRAS_ALFABETO[i]);
	// 	for (j = 1; j <= cont[i]; j++) {
	// 		cont++;
	// 	}
	// 	printf(" (%d)\n", cont[i]);
	// }
	return 0;
}

