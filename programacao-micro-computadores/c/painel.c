/* painel.h
* Protótipo das funções para a montagem do painel
* Ciro Cirne Trindade
* 23/04/2014
*/



#include <stdio.h>
#define _PAINEL_H
#define ALTURA 7 // altura da matriz e de cada número
#define COMP_NUM 7 // comprimento de cada número

char

/* função que preenche com espaços a matriz passada 
* como 2º argumento. O 1º argumento da função é o
* número de colunas da matriz */
void limpa_painel(int, char [][*]);

/* função que recebe um número no formato de uma string, 
* cria a matriz de caracteres com as dimensões adequadas
* e monta o painel, utilizando as funções plot? para 
* plotar cada número na posição correta na matriz */
void monta_painel(char *);

/* função que plota o zero na matriz. O 1º argumento desta
* função é a posição relativa do zero no número que deseja-se
* plotar, o 2º argumento é o número de colunas da matriz de
* caracteres utilizada para representar o painel, que é o
* 3º argumento da função */
void plot0(int, int, char [][*]);
void plot1(int, int, char [][*]);
void plot2(int, int, char [][*]);
void plot3(int, int, char [][*]);
void plot4(int, int, char [][*]);
void plot5(int, int, char [][*]);
void plot6(int, int, char [][*]);
void plot7(int, int, char [][*]);
void plot8(int, int, char [][*]);
void plot9(int, int, char [][*]);

/* esta função imprime no vídeo a matriz passada com seu 2º 
* argumento. O primeiro argumento desta função é o número
* de colunas da matriz */
void imprime_painel(int, char [][*]);



void plot0(int, int, char[][*])	{

}


void limpa_painel(int num, char [][*] m) {

}