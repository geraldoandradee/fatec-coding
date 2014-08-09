#include <stdio.h>

/* vamos pensar um pouco:
	patinho: uma cabeca e dois pes
	coelo: uma cabeca e quatro pes
*/

int main()
{
	int numero_de_pes = 0, numero_de_cabecas = 0, quantidade_de_patos = 0, quantidade_de_coelhos = 0, resto_de_animais = 0;
	printf("\nEntre com o numero de cabecas:\n");
	scanf("%d", &numero_de_cabecas);

	printf("\nEntre com o numero de pes:\n");
	scanf("%d", &numero_de_pes);


	// vamos validar o numero de entrada
	if (numero_de_pes > 2 && numero_de_cabecas > 0)
	{
		// vamos validar o numero de pes fornecidas
		if (numero_de_pes >= numero_de_cabecas * 2 && numero_de_pes <= numero_de_cabecas * 4) 
		{
			quantidade_de_coelhos  = (numero_de_pes - (2* numero_de_cabecas)) / 2;
			quantidade_de_patos = numero_de_cabecas - quantidade_de_coelhos;

			printf("A quantidade de patos é %d \n", quantidade_de_patos);
			printf("A quantidade de coelhos é %d \n", quantidade_de_coelhos);

		} else {
			printf("\nNumero de pes e cabecas invalido. Tem algum bicho invalido (aleijado).\n");
		}
		// agora vamos proporcionar o numero de pes pelo numero de cabecas

	} else {
		printf("\nNumero de pes e cabecas invalido\n");
	}

	return 0;
}