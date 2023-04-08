// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA 4
// QUEST�O 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHAS 4
#define COLUNAS 4

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[LINHAS][COLUNAS] = {{45, 32, 83, 95},
                                    {26, 14, 37, 42},
                                    {40, 43, 65, 77},
                                    {74, 79, 48, 55}};
    int soma = 0;
    float media;
    int i, j;

    // Calcula a soma dos valores da matriz
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            soma += matriz[i][j];
        }
    }

    // Calcula a m�dia aritm�tica
    media = (float)soma / (LINHAS * COLUNAS);

    printf("A matriz armazenada �:\n\n");
    for (i = 0; i < LINHAS; i++) {
        for (j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nA m�dia aritm�tica dos valores armazenados �: %.2f\n", media);

    return 0;
}
