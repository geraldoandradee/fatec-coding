#include <stdio.h>

int main () {
  float v, vt;
  
  printf("\nQual o valor do salario?\n");
  scanf("%f", &v);
  
  if (v > 1000) {
    vt = v + (v * 5/100);
    printf("\nO salario e: %.2f\n", vt);
  }
  else {
    vt = v + (v * 7/100);
    printf("\nO salario e: %.2f\n", vt);
  }
  return 0;
}