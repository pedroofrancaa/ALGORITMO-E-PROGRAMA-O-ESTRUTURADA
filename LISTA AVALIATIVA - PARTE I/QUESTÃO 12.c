// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 12

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM_VETOR 5

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

    float vetor[TAM_VETOR];
    float maior, menor, media, soma = 0;

    // Lê os números do vetor
    printf("Informe os %d números:\n", TAM_VETOR);
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("Número %d: ", i+1);
        scanf("%f", &vetor[i]);

        // Atualiza o maior e o menor número
        if (i == 0 || vetor[i] > maior) {
            maior = vetor[i];
        }
        if (i == 0 || vetor[i] < menor) {
            menor = vetor[i];
        }

        // Soma os números para calcular a média
        soma += vetor[i];
    }

    // Calcula a média
    media = soma / TAM_VETOR;

    // Exibe todos os números, o maior, o menor e a média
    printf("\nTodos os números informados:");
    for (int i = 0; i < TAM_VETOR; i++) {
        printf(" %.2f", vetor[i]);
    }
    printf("\nMaior número: %.2f", maior);
    printf("\nMenor número: %.2f", menor);
    printf("\nMédia dos números: %.2f", media);

    return 0;
}
