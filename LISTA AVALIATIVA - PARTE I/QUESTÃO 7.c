// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 7

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

    int vetor[10];
    int maior, posicao;

    // Lê os valores do vetor
    printf("Informe os valores do vetor:\n\n");
    for (int i = 0; i < 10; i++) {
        printf("Posiçao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Encontra o maior elemento do vetor
    maior = vetor[0];
    posicao = 0;
    for (int i = 1; i < 10; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            posicao = i;
        }
    }

    // Exibe o vetor, o maior elemento e a posição que ele se encontra
    printf("\nVetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nMaior elemento: %d\n", maior);
    printf("Posiçao do maior elemento: %d\n", posicao);

    return 0;
}
