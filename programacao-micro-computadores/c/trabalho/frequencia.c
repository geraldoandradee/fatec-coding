// frequencia.c

#include <string.h>
#include <stdio.h>
#include "frequencia.h"

//int frequencia(char *, char);
/* recebe uma string como 1� argumento e um caractere com 2� e devolve a frequ�ncia do caractere na string */
int frequencia(char frase[], char x){
   int i, j=0;
   char ch;
   printf("%c", x);
   printf("%s", &frase[0]);
   
   for(i=0; i<strlen(frase);i++){
     if(frase[i]==x){
       j++;
     }
   }     
   return j;
}

	 

//int maior_frequecia(int [], int);
/* recebe um vetor de inteiros como 1� argumento e o tamanho deste vetor como 2� argumento e devolve o maior valor
* contido no vetor. O vetor representa a frequ�ncia de cada letra do alfabeto, sendo assim, o elemento da posi��o
* 0 do vetor � a frequ�ncia da letra 'a', o da posi��o 2 a frequ�ncia da letra 'b', ..., o da posi��o 25 a frequ�ncia
* a letra 'z'. */
	

//void imprime_mais_frequente(int [], int, int);
/* recebe um vetor de inteiros como 1� argumento, o tamanho deste vetor como 2� argumento e a frequ�ncia da(s) letra(s)
* que ocorre(m) mais frequentemente no texto como 3� argumento. O vetor representa a frequ�ncia de cada letra do alfabeto
* no texto e a fun��o imprime a(s) letra(s) de maior frequ�ncia. Se houver empate, imprime as letras em ordem alfab�tica */
