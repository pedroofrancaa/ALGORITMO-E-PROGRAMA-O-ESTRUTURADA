// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 13

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM_VETOR 5

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

    int vetor[TAM_VETOR];
    int posicao_maior, posicao_menor;

    // Lê os números do vetor
    printf("Informe os %d números:\n", TAM_VETOR);
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("Número %d: ", i+1);
        scanf("%d", &vetor[i]);

        // Verifica se o número é o maior ou o menor
        if (i == 0) {
            posicao_maior = posicao_menor = i;
        } else {
            if (vetor[i] > vetor[posicao_maior]) {
                posicao_maior = i;
            }
            if (vetor[i] < vetor[posicao_menor]) {
                posicao_menor = i;
            }
        }
    }

    // Exibe a posição do maior e do menor número
    printf("\nPosição do maior número (%d): %d", vetor[posicao_maior], posicao_maior+1);
    printf("\nPosição do menor número (%d): %d\n\n", vetor[posicao_menor], posicao_menor+1);

    return 0;
}
