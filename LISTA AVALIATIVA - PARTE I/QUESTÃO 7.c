// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE I
// QUEST�O 7

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

    int vetor[10];
    int maior, posicao;

    // L� os valores do vetor
    printf("Informe os valores do vetor:\n\n");
    for (int i = 0; i < 10; i++) {
        printf("Posi�ao %d: ", i);
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

    // Exibe o vetor, o maior elemento e a posi��o que ele se encontra
    printf("\nVetor: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\nMaior elemento: %d\n", maior);
    printf("Posi�ao do maior elemento: %d\n", posicao);

    return 0;
}
