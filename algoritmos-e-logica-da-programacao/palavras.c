#include <stdio.h>
#include <string.h>

#define N 40

int main(){

	char s1[N+1], s2[N+1];
  // observação importante " difere de ', neste caso só funciona com aspas duplas.
	char s3[] = "Teste..."; //uma vez inicializado dessa forma o tamanho da string nao se altera.

	printf("Tamanho de S3: %d\n", strlen(s3));
	printf("Digite uma frase:\n");
  scanf("%40[^\n]", s1);
  strcpy(s2, "dia de sol");

  printf("\ns2: %s\n\n", s2);
  // vamos concatenar as strings
  strcat(s1, " ");
  strcat(s1, s2);
  printf("\ns1: %s\n\n", s1);

	return 0;
}