#include <stdio.h>

int main () {
  float a, b, c, n1, n2, n3, n4;
  printf ("\nDigite 3 valores:\n");
  scanf ("%f%f%f", &a, &b, &c);
  if (a <= 0 || b <= 0 || c <= 0) {
    printf("\nValores invalidos para fazer o calculo\n");
  }
  else {
    if (a <= b && a <= c) { //a é o primeiro
      if (b <= c) { // b é o segundo
	printf ("\n%.2f, %.2f, %.2f\n", a, b, c);
	a = n1;
	b = n2;
	c = n3;
      }
      else { // c é o segundo
	printf ("\n%.2f, %.2f, %.2f\n", a, c, b);
	a = n1;
	c = n2;
	b = n3;
      }
    }
    else {
      if (b <= c) { // b é o primeiro
	if (a <= c) { // a é o segundo
	  printf ("\n%.2f, %.2f, %.2f\n", b, a, c);
	  b = n1;
	  a = n2;
	  c = n3;
	}
	else { // c é o segundo
	  printf ("\n%.2f, %.2f, %.2f\n", b, c, a);
	  b = n1;
	  c = n2;
	  a = n3;
	}
      }
      else { //c é o primeiro
	if (a <= b) { //a é o segundo
	  printf ("\n%.2f, %.2f, %.2f\n", c, a, b);
	  c = n1;
	  a = n2;
	  b = n3;
	}
	else { //c é o segundo
	  printf ("\n%.2f, %.2f, %.2f\n", c, b, a);
	  c = n1;
	  b = n2;
	  a = n3;
	}	
      }	 
    }
    n4 = n1 + n2;
    if (n4 < n3) {
      printf("\nOs valores formam um triangulo\n %.2f, %.2f", n4, n3);
    }
    else {
      printf("\nOs valores não formam um triangulo\n %.2f, %.2f", n4, n3);
    }
  }
  return 0;
}