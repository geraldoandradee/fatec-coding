#include <stdio.h>
#include <stdlib.h>

struct simples {
  int info;
  struct simples * vizinho;
}

void mostra_simples();

int main() {
  struct simples s1, s2;
  s1.info = 0;
  s1.vizinho = NULL;
  mostra_simples(s1, "S1 inicializada");
  s2.info = 10;
  s2.vizinho = &s1;
  mostra_simples(s2, "S2 inicializada");
  return 0;
}