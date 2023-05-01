// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

        int vetor[8];
    int x, y;

    // Lê os valores do vetor
    printf("Informe os valores do vetor:\n");
    for (int i = 0; i < 8; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Lê os valores de X e Y
    printf("\nInforme a posicao X: ");
    scanf("%d", &x);
    printf("Informe a posicao Y: ");
    scanf("%d", &y);

    // Calcula a soma dos valores nas posições X e Y
    int soma = vetor[x] + vetor[y];

    // Exibe o resultado
    printf("\nSoma dos valores nas posicoes %d e %d: %d\n", x, y, soma);

    return 0;
}
