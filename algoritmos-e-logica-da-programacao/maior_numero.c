#include <stdio.h>

int main () {
  int n1, n2;
  printf("Escolha dois numeros\n");
  scanf("%d%d", &n1, &n2);
  if (n1 >= n2) {
    printf("\nO primeiro numero %d e maior\n", n1);
  }
  else {
    printf("\nO segundo numero %d e maior\n", n2);
  }
  return 0;
}