/* frequencia.h */

#ifndef _FREQUENCIA_H
#define _FREQUENCIA_H

#define COMPRIMENTO_MAXIMO 200 // comprimento máximo do texto
#define LETRAS_ALFABETO 26 // número de letras do alfabeto

/* recebe uma string como 1º argumento e um caractere com 2º
* e devolve a frequência do caractere na string */
int frequencia(char *, char);

/* recebe um vetor de inteiros como 1º argumento e o tamanho
* deste vetor como 2º argumento e devolve o maior valor
* contido no vetor. O vetor representa a frequência de
* cada letra do alfabeto, sendo assim, o elemento da posição
* 0 do vetor é a frequência da letra 'a', o da posição 2 a
* frequência da letra 'b', ..., o da posição 25 a frequência
* a letra 'z'. */
int maior_frequecia(int [], int);

/* recebe um vetor de inteiros como 1º argumento, o tamanho
* deste vetor como 2º argumento e a frequência da(s) letra(s)
* que ocorre(m) mais frequentemente no texto como 3º argumento.
* O vetor representa a frequência de cada letra do alfabeto
* no texto e a função imprime a(s) letra(s) de maior frequência.
* Se houver empate, imprime as letras em ordem alfabética */
void imprime_mais_frequente(int [], int, int);

#endif

