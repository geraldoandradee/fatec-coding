#include <stdio.h>

int main () {
  float a,b,c;
  printf ("\nDigite 3 valores:\n");
  scanf ("%f%f%f", &a, &b, &c);
  if (a <= b && a<=c) { //a é o primeiro
    if (b <= c) { // b é o segundo
      printf ("\n%.2f, %.2f, %.2f\n", a, b, c);
    }
    else { // c é o segundo
      printf ("\n%.2f, %.2f, %.2f\n", a, c, b);
    }
  }
  else {
    if (b <= c) { // b é o primeiro
      if (a <= c) { // a é o segundo
	printf ("\n%.2f, %.2f, %.2f\n", b, a, c);
      }
      else { // c é o segundo
	printf ("\n%.2f, %.2f, %.2f\n", b, c, a);
      }
    }
    else { //c é o primeiro
      if (a <= b) { //a é o segundo
	printf ("\n%.2f, %.2f, %.2f\n", c, a, b);
      }
      else { //c é o segundo
	printf ("\n%.2f, %.2f, %.2f\n", c, b, a);
      }
      
    }
      
  }
  return 0;
}