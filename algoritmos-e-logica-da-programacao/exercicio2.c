#include <stdio.h>

int main () {
  float v1, v2, vt, premio, p1, p2, pv1, pv2;
  
  printf("\nQual o valor do premio?\n");
  scanf("%f", &premio);
  
  printf("\nQual o valor do primeiro jogador?\n");
  scanf("%f", &v1);
  
  printf("\nQual o valor do segundo jogador?\n");
  scanf("%f", &v2);
  
  vt = v1 + v2;
  
  p1 = v1/vt;
  
  p2 = v2/vt;
  
  pv1 = premio*p1;
  pv2 = premio*p2;
  
  printf("\nO premio e: %.2f para o primeiro e: %.2f para o segundo\n", pv1, pv2);
  
  return 0;
}