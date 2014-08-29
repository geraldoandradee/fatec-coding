/* painel.c
* Implementação dos protótipos das funções para a montagem do painel
* José Geraldo Oliveira de Andrade Junior RA 1430481323022
* Diego João Sanches RA 1430481323009
* Luciano Leite Gustavo RA 1430481323023
* 30/04/2014
*/

#include <stdio.h>
#include <string.h>
#include "painel.h"

/**
 * Função de entrada do programa (entrypoint)
 * @param argc
 * @param argv
 * @return 
 */
int main(int argc, char * argv[]) {
	monta_painel(argv[1]);
	return 0;
}

void plot0(int posicao, int colunas, char matriz[ALTURA][colunas]) {	
	int cx=0;
	int cy=0;
	int p = posicao;
	int x[] = {  0,  0,  0,  0,  0,1,2,3,4,5,  1,  2,  3,  4,  5,  6,  6,  6,  6,6};
	int y[] = {p+1,p+2,p+3,p+4,p+5,p,p,p,p,p,p+6,p+6,p+6,p+6,p+6,p+1,p+2,p+3,p+4,p+5};
	int points = sizeof(x)/sizeof(int);
	
	for (cx=0;cx<points;++cx) {
		matriz[x[cx]][y[cx]] = '0';
	}
}
void plot1(int posicao, int colunas, char matriz[ALTURA][colunas]) {
	int cx=0;
	int cy=0;
	int p = posicao;
	int x[] = {0  ,   0,   1,   2,   3,   4,   5,   6,   6, 6};
	int y[] = {p+2, p+3, p+3, p+3, p+3, p+3, p+3, p+3, p+2, p+4};
	int points = sizeof(x)/sizeof(int);
	
	for (cx=0;cx<points;++cx) {
		matriz[x[cx]][y[cx]] = '1';
	}	

}
void plot2(int posicao, int colunas, char matriz[ALTURA][colunas]) {
	int cx=0;
	int cy=0;
	int p = posicao;
	int x[] = {0,0,0,0,0, 1,1,  2,3,4,5,  6,6,6,6,6,6,6};
	int y[] = {p+1,p+2,p+3,p+4,p+5, p,p+6, p+5, p+4, p+3, p+2, p,p+1,p+2,p+3,p+4,p+5,p+6};
	int points = sizeof(x)/sizeof(int);
	
	for (cx=0;cx<points;++cx) {
		matriz[x[cx]][y[cx]] = '2';
	}
}
void plot3(int posicao, int colunas, char matriz[ALTURA][colunas]) {
	int cx=0;
	int cy=0;
	int p = posicao;
	int x[] = {0,0,0,0,0,0, 1,2,  3,3,3,  4,5, 6,6,6,6,6,6};
	int y[] = {p,p+1,p+2,p+3,p+4,p+5, p+6,p+6, p+3,p+4,p+5, p+6,p+6, p,p+1,p+2,p+3,p+4,p+5,};
	int points = sizeof(x)/sizeof(int);
	
	for (cx=0;cx<points;++cx) {
		matriz[x[cx]][y[cx]] = '2';
	}
}
void plot4(int posicao, int colunas, char matriz[ALTURA][colunas]) {
	int cx=0;
	int cy=0;
	int p = posicao;
	int x[] = {0,0, 1,1, 2,2, 3,3,3,3,3,3,3, 4, 5, 6, };
	int y[] = {p+0,p+6, p+0,p+6, p+0,p+6, p+0,p+1,p+2,p+3,p+4,p+5,p+6, p+6, p+6, p+6, };
	int points = sizeof(x)/sizeof(int);
	
	for (cx=0;cx<points;++cx) {
		matriz[x[cx]][y[cx]] = '4';
	}
}
void plot5(int posicao, int colunas, char matriz[ALTURA][colunas]) {
	int cx=0;
	int cy=0;
	int p = posicao;
	int x[] = {0,0,0,0,0,0,0,               1, 2, 3,3,3,3,3,3, 4, 5, 6,6,6,6,6,6};
	int y[] = {p+0,p+1,p+2,p+3,p+4,p+5,p+6, p+0, p+0, p+0,p+1,p+2,p+3,p+4,p+5, p+6, p+6, p+0,p+1,p+2,p+3,p+4,p+5};
	int points = sizeof(x)/sizeof(int);
	
	for (cx=0;cx<points;++cx) {
		matriz[x[cx]][y[cx]] = '5';
	}
}
void plot6(int posicao, int colunas, char matriz[ALTURA][colunas]) {
	int cx=0;
	int cy=0;
	int p = posicao;
	int x[] = {0,0,0,0,0,0, 1, 2, 3,3,3,3,3,3, 4,4, 5,5, 6,6,6,6,6};
	int y[] = {p+1,p+2,p+3,p+4,p+5,p+6, p+0, p+0, p+0,p+1,p+2,p+3,p+4,p+5, p+0,p+6, p+0,p+6, p+1,p+2,p+3,p+4,p+5};
	int points = sizeof(x)/sizeof(int);
	
	for (cx=0;cx<points;++cx) {
		matriz[x[cx]][y[cx]] = '6';
	}
}
void plot7(int posicao, int colunas, char matriz[ALTURA][colunas]) {
	int cx=0;
	int cy=0;
	int p = posicao;
	int x[] = {0,0,0,0,0,0,0, 6, 5, 4, 3, 2, 1};
	int y[] = {p+0,p+1,p+2,p+3,p+4,p+5,p+6, p+1, p+2, p+3, p+4, p+5, p+6};
	int points = sizeof(x)/sizeof(int);
	
	for (cx=0;cx<points;++cx) {
		matriz[x[cx]][y[cx]] = '7';
	}
}
void plot8(int posicao, int colunas, char matriz[ALTURA][colunas]) {
	int cx=0;
	int cy=0;
	int p = posicao;
	int x[] = {0,0,0,0,0, 1,1, 2,2, 3,3,3,3,3, 4,4, 5,5, 6,6,6,6,6};
	int y[] = {p+1,p+2,p+3,p+4,p+5, p+0,p+6, p+0,p+6, p+1,p+2,p+3,p+4,p+5, p+0,p+6, p+0,p+6, p+1,p+2,p+3,p+4,p+5};
	int points = sizeof(x)/sizeof(int);
	
	for (cx=0;cx<points;++cx) {
		matriz[x[cx]][y[cx]] = '8';
	}
}
void plot9(int posicao, int colunas, char matriz[ALTURA][colunas]) {
	int cx=0;
	int cy=0;
	int p = posicao;
	int x[] = {0,0,0,0,0, 1,1, 2,2, 3,3,3,3,3,3, 4, 5, 6,6,6,6,6,6};
	int y[] = {p+1,p+2,p+3,p+4,p+5, p+0,p+6, p+0,p+6, p+1,p+2,p+3,p+4,p+5,p+6, p+6, p+6, p+0,p+1,p+2,p+3,p+4,p+5};
	int points = sizeof(x)/sizeof(int);
	
	for (cx=0;cx<points;++cx) {
		matriz[x[cx]][y[cx]] = '9';
	}
}

/**
 * Essa função servirá para escrever o painel na tela.
 * @param colunas
 * @param matriz
 * @return void
 */
void imprime_painel(int colunas, char matriz[ALTURA][colunas]) {
	int linha = 0;
	int coluna = 0;
	
	for (linha = 0; linha < ALTURA; ++linha) {
		for (coluna=0; coluna<colunas; ++coluna) {
			printf("%c", matriz[linha][coluna]);
		}
		printf("\n");
	}
}

/**
 * Essa função recebe a cadeia de caracteres e processa-os chamando a função 
 * correta para plotar na matriz.
 * 
 * @param caractere
 * @return void
 */
void monta_painel(char * caractere) {
	// vamos definir o máximo de colunas que a string vai gerar
	int max_columns = strlen(caractere) * (COMP_NUM + 1);  
	char matriz[ALTURA][max_columns];  
	int i = 0;

	// Vamos limpar o painel colocando espaços dentro da matriz
	limpa_painel(max_columns, matriz);
	
	for (i = 0; i < strlen(caractere); ++i)
	{
		if (caractere[i] == '0'){
			plot0(i * (COMP_NUM + 1), max_columns, matriz);
		}
		if (caractere[i] == '1'){
			plot1(i * (COMP_NUM + 1), max_columns, matriz);
		}
		if (caractere[i] == '2'){
			plot2(i * (COMP_NUM + 1), max_columns, matriz);
		}
		if (caractere[i] == '3'){
			plot3(i * (COMP_NUM + 1), max_columns, matriz);
		}
		if (caractere[i] == '4'){
			plot4(i * (COMP_NUM + 1), max_columns, matriz);
		}
		if (caractere[i] == '5'){
			plot5(i * (COMP_NUM + 1), max_columns, matriz);
		}
		if (caractere[i] == '6'){
			plot6(i * (COMP_NUM + 1), max_columns, matriz);
		}
		if (caractere[i] == '7'){
			plot7(i * (COMP_NUM + 1), max_columns, matriz);
		}
		if (caractere[i] == '8'){
			plot8(i * (COMP_NUM + 1), max_columns, matriz);
		}
		if (caractere[i] == '9'){
			plot9(i * (COMP_NUM + 1), max_columns, matriz);
		}
		
		
	}	
	
	// Agora vamos colocar tudo na tela
	imprime_painel(max_columns, matriz);

}

/**
 * Essa função serve para limpar a matriz com os dados plotados.
 * 
 * @param colunas
 * @param matriz
 */
void limpa_painel(int colunas, char matriz [ALTURA][colunas]) {
	int linha = 0;
	int coluna = 0;
	char espaco = ' ';
	
	for (linha=0;linha<ALTURA;++linha){
		for(coluna=0;coluna<colunas-1;++coluna) {
			matriz[linha][coluna] = espaco;
		}
	}
}