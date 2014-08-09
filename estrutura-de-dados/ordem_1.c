#include <stdio.h>

// baixo acoplamento
// alta coesao

int busca(int *, int, int); //protótipo
void desloca(int *, int, int); //protótipo
void mostra(int *, int, char *); //protótipo

int main () {
	int v[10] = {2, 4, 6, 8, 0, 0, 0, 0, 0, 0};
	int novo, pos_novo, ult = 3;
	mostra(v, ult, "Vetor original");
	printf("Digite um novo elemento: ");
	scanf("%d", &novo);  // joga a referencia na variavel novo
	pos_novo = busca(v, ult, novo);
	desloca(v, ult, pos_novo);
	v[pos_novo] = novo; // nova posicao pode receber o valor do item
	ult++; // atualiza a posicao do ultimo item
	mostra(v, ult, "Vetor alterado");
	return 0;
}


int busca(int *v, int ult, int novo){
	int i;
	for (i=0; i<=ult && v[i] < novo;i++);
	return i;	
}


void desloca(int *v, int ult, int pos_novo) {
	int i;
	for (i=ult+1;i>pos_novo;i--) {
		v[i] = v[i-1];
	}
}

void mostra(int * v, int ult, char * msg) {
	int i;
	printf("%s\n", msg);
	for (i=0;i<=ult;i++) {
		printf("%d ", v[i]);
	}
	printf("\n");
}