#include <stdio.h>

int main () {
   float n1, n2, media;
   printf("\nColoque suas notas para o calculo da Media\n");
   scanf("%f%f", &n1, &n2);
   media = (n1 + n2)/2;
   if ( media >= 6) {
     printf("\nPARABENS voce foi aprovado com Media %.2f\n", media);
   }
   else {
     printf("\nEstude um pouco mais, sua Media e %.2f\n", media);
   }   
   return 0;
}