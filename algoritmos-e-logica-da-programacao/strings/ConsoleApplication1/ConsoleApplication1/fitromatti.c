/*
Simples para qualquer numero inteiro k < n, k será 1 para k primeiros digitos na sequencia.
Os itens seguintes será a soma de k ultimos numeros. O total de numeros deve obedecer ao total de total = k + (n-k)
*/

#include <stdio.h>

int main() {
	int k = 0;
	int n = 0;
	int i = 0;
	int contador = 0;

	printf("\n\nVamos calcular a sequencia de Fitromacci. Entre com k depois n:\n\n");
	scanf("%d%d", &k, &n);
	
	// agora vamos validar as entradas

	if (k >= n && k > 0) {
		printf("K não pode ser maior ou igual a N");
		return 1;
	}

	//ok validada as entradas vamos definir a matriz                           
	int vetor[n];
	contador = k;

	for (i=0; i < n; i++) {
		if (contador > 0) {
			vetor[i] = 1;
			contador--;
		} else {

		}
	}
	


	
	printf("\n\n");
	system("PAUSE");
	return 0;
}