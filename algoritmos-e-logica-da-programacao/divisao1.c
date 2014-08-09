#include <stdio.h>

int main () {
   int n1, n2;
   float total;
   printf("Escolha dois numeros para serem divididos\n");
   scanf("%d%d", &n1, &n2);
   if ( n2 != 0 ) {
     total = (float)n1/n2;
     printf("\nO resultado e: %.2f\n\n", total);
   }
   else {
     printf("\nImpossivel dividir pois %d zero nao e um divisor\n\n", n2);
   }  
   return 0;
}