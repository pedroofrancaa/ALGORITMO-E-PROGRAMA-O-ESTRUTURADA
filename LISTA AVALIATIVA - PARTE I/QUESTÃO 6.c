// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 6

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

    int vetor[10];
    int maior, menor;

    // Lê os valores do vetor
    printf("Informe os valores do vetor:\n\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Encontra o maior e o menor elemento do vetor
    maior = menor = vetor[0];
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }

    // Exibe o resultado
    printf("\n-- Maior elemento do vetor: %d\n", maior);
    printf("-- Menor elemento do vetor: %d\n", menor);

    return 0;
}
