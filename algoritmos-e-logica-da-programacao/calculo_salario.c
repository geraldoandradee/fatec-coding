#include <stdio.h>

int main () {
  float valor_hora, salario_bruto, salario_liq, imposto;
  int numero_horas;
  printf("Qual o valor de sua hora de trabalho?\n");
  scanf("%f", &valor_hora);
  printf("Quantas hrs voce ja trabalhou?\n");
  scanf("%d", &numero_horas);
  salario_bruto = valor_hora * numero_horas;
  if (salario_bruto > 0 && salario_bruto < 2000) {
    imposto = salario_bruto*10/100;
    salario_liq = salario_bruto + imposto;
    printf("\nSeu salario bruto e %.2f,\nvc pagara 10%% de desconto que dara %.2f\ne dara liquido neste mes e %.2f\n",salario_bruto, imposto, salario_liq);
  }
  else {
    imposto = salario_bruto*15/100;
    salario_liq = salario_bruto + imposto;
    printf("\nSeu salario bruto e %.2f,\nvc pagara 15%% de desconto que dara %.2f\ne dara liquido neste mes e %.2f\n",salario_bruto, imposto, salario_liq);
  }
  return 0;
}