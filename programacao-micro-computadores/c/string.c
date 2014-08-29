#include <stdio.h>
#include <string.h>


int lastindexof(const char *, char);


int main(){

	char str[41], ch;
	int pos;

	printf("Informe uma string: \n");
	scanf("%41[^\n]", str);
	printf("Informe um caractere: \n");
	scanf(" %c", &ch);

	pos = lastindexof(str, ch);

	if (pos != -1) {
		printf("Posicao da ultima de %c em \"%s\": %d\n", ch, str, pos);
	} else {
		printf("%c nao ocorre em \"%s\"\n", ch, str);
	}
}


int lastindexof(const char * s, char c)
{
	int i = strlen(s) - 1;
	for(i; i >= 0; i--)
	{
		if (s[i] == c) {
			return i;
		}
	}

	return -1;
}