#include <stdio.h>

void separa_data(int, int *, int *, int *);


int main(){

	int data, dia, mes, ano;

	printf("Informe uma data no formato (ddmmaaaa)\n");
	scanf("%d", &data);
	separa_data(data, &dia, &mes, &ano);
	printf("Data: %02d/%02d/%d\n", dia, mes, ano);

	return 0;
}


void separa_data(int dt, int * d, int * m, int * a) {

	*d = dt / 1000000;
	*m = (dt / 10000) % 100;
	*a = dt % 10000;
}