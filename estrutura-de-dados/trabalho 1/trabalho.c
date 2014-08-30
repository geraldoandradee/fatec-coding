#include "trabalho.h"

int main() {  
  int *vetor_aleatorio;
  int *vetor_asc;
  int *vetor_desc;

  vetor_aleatorio = ( int * ) malloc ( T * sizeof(int));
  vetor_asc = ( int * ) malloc ( T * sizeof(int));
  vetor_desc = ( int * ) malloc ( T * sizeof(int));
  
  
  float contador_comparacao = 0;
  float contador_atribuicao = 0;

  int i;
  
  for(i=0; i<10; i++){
    printf("\nGerando os vetores, %d loop Bubble...\n", i+1);
    
    gera(vetor_aleatorio, T);
    gera_vetor_crescente(vetor_asc, T);
    gera_vetor_decrescente(vetor_desc, T);
    bubble(vetor_aleatorio, T, &contador_comparacao, &contador_atribuicao);
    printf("\nVetor aleatorio: Contador comparacao %.f Contador atribuicao %.f \n", contador_comparacao, contador_atribuicao);

    contador_comparacao = 0;
    contador_atribuicao = 0;

    bubble(vetor_asc, T, &contador_comparacao, &contador_atribuicao);
    printf("Vetor crescente: Contador comparacao %.f Contador atribuicao %.f \n", contador_comparacao, contador_atribuicao);

    contador_comparacao = 0;
    contador_atribuicao = 0;

    bubble(vetor_desc, T, &contador_comparacao, &contador_atribuicao);
    printf("Vetor decrescente: Contador comparacao %.f Contador atribuicao %.f \n", contador_comparacao, contador_atribuicao);
  }
  
  for(i=0; i<10; i++){
    printf("\nGerando os vetores, %d loop Inserction...\n", i+1);
    
    gera(vetor_aleatorio, T);
    gera_vetor_crescente(vetor_asc, T);
    gera_vetor_decrescente(vetor_desc, T);
    insertionSort(vetor_aleatorio, T, &contador_comparacao, &contador_atribuicao);
    printf("\nVetor aleatorio: Contador comparacao %.f Contador atribuicao %.f \n", contador_comparacao, contador_atribuicao);

    contador_comparacao = 0;
    contador_atribuicao = 0;

    insertionSort(vetor_asc, T, &contador_comparacao, &contador_atribuicao);
    printf("Vetor crescente: Contador comparacao %.f Contador atribuicao %.f \n", contador_comparacao, contador_atribuicao);

    contador_comparacao = 0;
    contador_atribuicao = 0;

    insertionSort(vetor_desc, T, &contador_comparacao, &contador_atribuicao);
    printf("Vetor decrescente: Contador comparacao %.f Contador atribuicao %.f \n", contador_comparacao, contador_atribuicao);
  }
  
  for(i=0; i<10; i++){
    printf("\nGerando os vetores, %d loop Selection...\n", i+1);
    
    gera(vetor_aleatorio, T);
    gera_vetor_crescente(vetor_asc, T);
    gera_vetor_decrescente(vetor_desc, T);
    selection(vetor_aleatorio, T, &contador_comparacao, &contador_atribuicao);
    printf("\nVetor aleatorio: Contador comparacao %.f Contador atribuicao %.f \n", contador_comparacao, contador_atribuicao);

    contador_comparacao = 0;
    contador_atribuicao = 0;

    selection(vetor_asc, T, &contador_comparacao, &contador_atribuicao);
    printf("Vetor crescente: Contador comparacao %.f Contador atribuicao %.f \n", contador_comparacao, contador_atribuicao);

    contador_comparacao = 0;
    contador_atribuicao = 0;

    selection(vetor_desc, T, &contador_comparacao, &contador_atribuicao);
    printf("Vetor decrescente: Contador comparacao %.f Contador atribuicao %.f \n", contador_comparacao, contador_atribuicao);
  }
  return 0;
}

void gera_vetor_decrescente(int * vetor, int n) {
  int i;
  for(i=0;i<n;i++) {
    vetor[i] = n-i;
  }
}

void gera_vetor_crescente(int * vetor, int n) {
  int i=0;
  for(i=0;i<n;i++) {
    vetor[i] = i;
  }
}

void gera (int *v, int n){
  int i=0;
  int numero;
  
  for(i=0; i<=n;i++){
    v[i] = rand() % n;
    }
}

void bubble (int * v, int n, float * cc, float * ca) {
  int i, j;
  for ( i = 1; i < n; i++ , (*cc)++) {
    for ( j = 0; j < n - i; j++, (*cc)++) {
      (*cc)++;
      if (v[j] > v[j+1]) {
        troca (v, j);
        (*ca) = (*ca) + 3;
      }
    }
  }
}

void troca (int *v, int pos) {
  int aux = v[pos];
  v[pos] = v[pos+1];
  v[pos+1] = aux;
}

void trocaAnterior (int *v, int pos){
  int aux     = v[pos];
    v[pos]    = v[pos - 1];
    v[pos - 1]  = aux;
}

void trocaMinimo (int *v, int min, int pos){
  int aux     = v[pos];
    v[pos]    = v[min];
    v[min]    = aux;
}

void insertionSort (int * v, int n, float * cc, float * ca){
  int i, j, key;
  for ( i = 1; i < n; i++ , (*cc)++) {
    (*ca)++;
    key = v[i];
    while ( i > 0 && v[i -1] > key ) {
      trocaAnterior (v, i);
      --i;
      (*ca) = (*ca) + 4;  
    }
  }
}

void selection (int *v, int n, float * cc, float * ca){ 
  int i, j, x, min, k;
  for ( i = 0; i < (n-1); i++ ){
    (*cc) = (*cc)+2;
    min = i;
    (*ca) = (*ca) + 1;
    for ( j = i + 1; j < n; j++ ){
      (*cc) = (*cc)+1;
      if (v[min] > v[j]){
        min = j;
        (*ca) = (*ca) + 1;
      }
      if( min != i){
        (*cc) = (*cc)+1;
        trocaMinimo (v, min, i);
        (*ca) = (*ca) + 3;
      }
    }
  }
}