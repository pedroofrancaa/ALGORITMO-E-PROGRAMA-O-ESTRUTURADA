// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA 4
// QUEST�O 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define LINHAS 4
#define COLUNAS 4

int main(){
    setlocale(LC_ALL, "Portuguese");

    int matriz[LINHAS][COLUNAS] = {
        {45, 32, 83, 95},
        {26, 14, 37, 42},
        {40, 43, 65, 77},
        {74, 79, 48, 55}
    };

    int soma = 0;

    // Percorre a terceira linha da matriz e calcula a soma dos valores
    for (int j = 0; j < COLUNAS; j++) {
        soma += matriz[2][j]; // A terceira linha tem �ndice 2
    }

    printf("Matriz:\n\n");
    // Imprime os valores da matriz
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma dos valores em destaque: %d\n\n", soma);

    return 0;
}
