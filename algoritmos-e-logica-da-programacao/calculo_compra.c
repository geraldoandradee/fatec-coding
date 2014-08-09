#include <stdio.h>

int main () {
  float valor, valor1, valor2;
  int tipo_pag;
  printf("Qual o valor de sua compra?\n");
  scanf("%f", &valor);
  printf("\nSelecione o tipo de pagamento:\n 1 - A Vista \n 2 - A Prazo\n");
  scanf("%d", &tipo_pag);
  if (tipo_pag == 1) {
    valor1 = valor*10/100;
    valor2 = valor-valor1;
    printf("\nO valor da sua compra e %.2f com o desconto de %f\n", valor2, valor1);
  }
  else {
    valor1 = valor/3;
    printf("\nO valor das parcelas sera %.2f\n", valor1);
  }
  return 0;
}