// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE I
// QUEST�O 12

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM_VETOR 5

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

    float vetor[TAM_VETOR];
    float maior, menor, media, soma = 0;

    // L� os n�meros do vetor
    printf("Informe os %d n�meros:\n", TAM_VETOR);
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("N�mero %d: ", i+1);
        scanf("%f", &vetor[i]);

        // Atualiza o maior e o menor n�mero
        if (i == 0 || vetor[i] > maior) {
            maior = vetor[i];
        }
        if (i == 0 || vetor[i] < menor) {
            menor = vetor[i];
        }

        // Soma os n�meros para calcular a m�dia
        soma += vetor[i];
    }

    // Calcula a m�dia
    media = soma / TAM_VETOR;

    // Exibe todos os n�meros, o maior, o menor e a m�dia
    printf("\nTodos os n�meros informados:");
    for (int i = 0; i < TAM_VETOR; i++) {
        printf(" %.2f", vetor[i]);
    }
    printf("\nMaior n�mero: %.2f", maior);
    printf("\nMenor n�mero: %.2f", menor);
    printf("\nM�dia dos n�meros: %.2f", media);

    return 0;
}
