// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE I
// QUEST�O 5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

        int vetor[10];
    int pares = 0;

    // L� os valores do vetor
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
