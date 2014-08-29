/*
1. Ler uma string, invertê-la e mostrá-la 
2. Ler uma sentença e contar as vogais 
3. Ler uma frase e remover os espaços em branco, mostrá-la adequadamente 
4. Ler uma frase e verificar se ela é palíndromo 
5. Ler 2 palavras e verificar se a segunda é giro da primeira.
*/

#include <stdio.h>
#include <string.h>

int mmain()
{
	char name[50];
	char nome_invertido[50]; // apenas 50 caracteres

	int total_array_string = 0, counter = 0;
	printf("\nDigite uma string:\n");
	scanf("%[^\n]%*c", name);
	printf("Agora vamos inverter a string");
	total_array_string = strlen(name)-1; // para iterar sobre a string


	for(counter=0; name[counter]!='\0'; counter++) {        //Repete enquanto nao chegar ao final da string
       nome_invertido[total_array_string] = name[counter]; 
       total_array_string--;      
    }

	nome_invertido[strlen(name)] = '\0';

	printf("O nome invertido eh: %s", nome_invertido);

	printf("\n\n");
	system("PAUSE");
	return 0;
}

