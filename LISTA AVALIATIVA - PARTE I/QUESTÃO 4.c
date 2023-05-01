// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE I
// QUEST�O 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

        int vetor[8];
    int x, y;

    // L� os valores do vetor
    printf("Informe os valores do vetor:\n");
    for (int i = 0; i < 8; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // L� os valores de X e Y
    printf("\nInforme a posicao X: ");
    scanf("%d", &x);
    printf("Informe a posicao Y: ");
    scanf("%d", &y);

    // Calcula a soma dos valores nas posi��es X e Y
    int soma = vetor[x] + vetor[y];

    // Exibe o resultado
    printf("\nSoma dos valores nas posicoes %d e %d: %d\n", x, y, soma);

    return 0;
}
