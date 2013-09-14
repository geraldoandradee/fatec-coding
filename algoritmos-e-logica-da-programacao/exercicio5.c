#include <stdio.h>
#define LIM 10

int main () {
  int numero1 = 0;

  int numero_aleatorio = rand() % LIM + 1;

  printf("%d\n", numero_aleatorio);

  printf("\nEntre com um numero inteiro:\n");
  scanf("%d", &numero1);

  if (numero1 == numero_aleatorio) {
    printf("\nVoce acertou!\n");
  } else {
    if (numero1 > numero_aleatorio) {
      printf("\nNumero aleatorio e menor. Tente novamente:\n");
    } else {
      printf("\nNumero aleatorio e maior. Tente novamente:\n");      
    }

    scanf("%d", &numero1);
    if (numero1 == numero_aleatorio) {
      printf("\nVoce acertou!\n");
    } else {
      if (numero1 > numero_aleatorio) {
        printf("\nNumero fornecido e maior. Tente novamente:\n");
      } else {
        printf("\nNumero fornecido e menor. Tente novamente:\n");      
      }
    }

  } 
  return 0;
} 