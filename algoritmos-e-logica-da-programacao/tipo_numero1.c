#include <stdio.h>

int main () {
  int n1, resto;
  printf("\nDigite um numero\n");
  scanf("%d", &n1);
  resto = n1%2;
  if (resto == 0) {
    printf("o numero %d e par\n", n1);
  }
  else {
    printf("o numero %d e impar\n", n1);
  }
  return 0;
}