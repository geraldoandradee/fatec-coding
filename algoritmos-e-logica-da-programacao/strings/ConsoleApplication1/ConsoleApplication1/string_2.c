/*
1. Ler uma string, invert�-la e mostr�-la 
2. Ler uma senten�a e contar as vogais 
3. Ler uma frase e remover os espa�os em branco, mostr�-la adequadamente 
4. Ler uma frase e verificar se ela � pal�ndromo 
5. Ler 2 palavras e verificar se a segunda � giro da primeira.
*/

#include <stdio.h>
#include <string.h>

int mmmain()
{
	char nome[50];
	char vogais[5] = {'a', 'e', 'i', 'o', 'u'}; // apenas 50 caracteres
	int numero_de_vogais = 0, total_array_string = 0, counter = 0;

	printf("Entre com a string: ");
	scanf("%[^\n]%*c", nome);
	printf("Agora vamos contar as vogais.");
	total_array_string = strlen(nome) - 1; // para iterar sobre a string

	for(counter=0; nome[counter]!='\0'; counter++) {        //Repete enquanto nao chegar ao final da string
		
    }

	printf("\n\nO total de vogais eh: %d\n\n", numero_de_vogais);

	printf("\n\n");
	system("PAUSE");
	return 0;
}

