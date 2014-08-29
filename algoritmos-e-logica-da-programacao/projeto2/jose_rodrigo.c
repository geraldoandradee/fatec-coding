/**
* Simples para qualquer numero inteiro k < n, k será 1 para k primeiros digitos na sequencia.
* Os itens seguintes será a ultimo_termo de k ultimos numeros. O total de numeros deve obedecer ao total de total = k + (n-k)
*/
#include <stdio.h>

int main() {
    int n, k, i, j;
    int ultimo_termo = 0;

    printf("Calculo do enesimo termo de Fitromacci\n");
    printf("Digite um inteiro k: ");
    scanf("%d", &k);
    printf("Digite um inteiro n: ");
    scanf("%d", &n);

    if (n <= k) {
        printf("\nK nao pode ser menor do que N\n");
        return 1;
    }

    if (k <= 1) {
        printf("\nK precisa ser maior do que 1\n");
        return 2;
    }

    int vetor[n];

    for (i = 0; i < k; i++) {
        vetor[i] = 1;      // todos os primeiros 1
    }

    for (i = k; i < n; i++) {
        vetor[i] = 0;
        for (j = i - 1; j >= i - k; j--) {
            vetor[i] += vetor[j];
        }
    }

    printf("Segue a sequecia Fitromacci: ");
    for (i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }

    printf("\nO ultimo termo de Fitromacci eh: %d", vetor[n - 1]);

    return 0;
}