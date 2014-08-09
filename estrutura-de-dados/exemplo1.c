#include<stdio.h>

int busca(int *, int, int);
void desloca (int *, int, int);
void mostra (int *, int, char *); 

int main() {
  int v[10] = {2, 4, 6, 8, 0, 0, 0, 0, 0, 0};
  int novo, pos_novo, ult = 3;

  mostra(v, ult, "Vetor Original");
  printf("\nDigite um novo elemento: ");
  scanf("%d", &novo);

  pos_novo = busca(v, ult, novo);
  
  desloca(v, ult, pos_novo);
  
  v[pos_novo] = novo;
  ult++;

  mostra(v, ult, "Vetor Alterado");
  
  return 0;
}

int busca(int *v, int ult, int novo){
  int i;
  for(i=0; i<=ult && v[i]<novo; i++);
  return i;  
}

void desloca(int *v, int ult, int pos_novo){
  int i;
  for(i=ult+1; i>pos_novo; i--){
    v[i] = v[i-1];
  }
}

void mostra(int *v, int ult, char *msg){
  int i;
  printf("\n%s\n", msg);
  for(i=0; i<=ult; i++){
    printf("%d ", v[i]);
  }
  printf("\n");
}