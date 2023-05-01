// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

        int vetor[10];
    int pares = 0;

    // Lê os valores do vetor
    printf("Informe os valores do vetor:\n");
    for (int i = 0; i < 10; i++) {
        printf("Posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }

    // Conta quantos valores pares o vetor possui
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 == 0) {
            pares++;
        }
    }

    // Exibe o resultado
    printf("\nO vetor possui %d valores pares.\n", pares);

    return 0;
}
