// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE I
// QUEST�O 13

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM_VETOR 5

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

    int vetor[TAM_VETOR];
    int posicao_maior, posicao_menor;

    // L� os n�meros do vetor
    printf("Informe os %d n�meros:\n", TAM_VETOR);
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("N�mero %d: ", i+1);
        scanf("%d", &vetor[i]);

        // Verifica se o n�mero � o maior ou o menor
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

    // Exibe a posi��o do maior e do menor n�mero
    printf("\nPosi��o do maior n�mero (%d): %d", vetor[posicao_maior], posicao_maior+1);
    printf("\nPosi��o do menor n�mero (%d): %d\n\n", vetor[posicao_menor], posicao_menor+1);

    return 0;
}
