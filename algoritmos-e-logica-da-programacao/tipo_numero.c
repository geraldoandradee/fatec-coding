#include <stdio.h>

int main () {
  int n1;
  printf("\nEscolha um numero\n");
  scanf("%d", &n1);
  if (n1 >= 0) {
    printf("\nNumero %d e positivo\n", n1);
  }
  else {
    printf("\nNumero %d e negativo\n", n1);
  }
  return 0;
}