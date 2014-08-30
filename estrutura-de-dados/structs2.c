#include <stdio.h>
#include <stdlib.h>

/*
 1 - Construir uma funcao que recebe ums struct simples e dobra sua info por parametro
 2 - Construir uma funcao que recebe uma struct simples e devolve outra struct (por return) cuja info é o sucessor da infor da entrada
 3 - Construir uma funcao que recebe duas structs simples e devolve o ponteiro para uma struct (por return) cuja info é a soma da infos de entrada
*/

struct simples {
  int info;
  struct simples * vizinho;
};

void mostra_conta (struct simples c, char *msg) {
  printf("\n%s\n", msg);
  printf("struct: info %d\n", c.info);
}

void dobra_info(struct simples * s) {
  s->info *= 2;
}

struct simples sucessor(struct simples s) {
  s.info++;
  return s;
}

int main() {
  struct simples s1, s2;
  s1.info = 2;
  s1.vizinho = NULL;

  // # 1
  mostra_conta(s1, "S1 inicializada");
  dobra_info(&s1);
  mostra_conta(s1, "S1 Alterada");
  // # 1 FIM

  // # 2 
  mostra_conta(s1, "S1 antes de suceder");
  s2 = sucessor(s1);
  mostra_conta(s2, "S1 depois de suceder");
  // # 2 FIM 

  // # 3

   

  return 0;
}