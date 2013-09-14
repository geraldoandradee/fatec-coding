#include <stdio.h>

int main () {
  int numero1 = 0, numero2 = 0, numero3 = 0, numero4 = 0;
  printf("\nDigite quatro numeros:\n");
  scanf("%d%d%d%d", &numero1, &numero2, &numero3, &numero4);
  if (numero1 >= numero2 && numero1>=numero4 && numero1 >= numero3) {
    printf("\nO primeiro 1 eh o maior: %d\n", numero1);
  } else {
    if (numero2 >= numero3 && numero2 >= numero4) {
      printf("\nO segundo numero e o maior: %d\n", numero2);
    } else { 
      if (numero3 >= numero4 && numero3 >= numero2) { //a é o segundo
        printf("\nO terceiro numero e o maior: %d\n", numero3);
      } else { //c é o segundo
        printf("\nO quarto numero e o maior: %d\n", numero4);
      }
    }
  }
  return 0;
}