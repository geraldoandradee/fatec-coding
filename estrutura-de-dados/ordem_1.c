#include <stdio.h>

// baixo acoplamento
// alta coesao

int busca(int *, int, int); //protótipo
void desloca(int *, int, int); //protótipo

int main () {
	int v[10] = {2, 4, 6, 8, 0, 0, 0, 0, 0, 0};
	int novo, pos_novo, ult = 3;
	printf("Digite um novo elemento: ");
	scanf("%d", &novo);  // joga a referencia na variavel novo

	pos_novo = busca(v, ult, novo);
	descola = (v, ult, novo);
	v[pos_novo] = novo;
	ult++;

	return 0;
}