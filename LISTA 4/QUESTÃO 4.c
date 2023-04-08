// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA 4
// QUESTÃO 3

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
    int linhaDestaque1 = 1;  // Linha em destaque 1 (índice 1)
    int linhaDestaque2 = 3;  // Linha em destaque 2 (índice 3)
    int somaLinha1 = 0;
    int somaLinha2 = 0;
    int maiorSoma = 0;

    printf("Matriz original:\n");
    // Imprime a matriz original
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Calcula a soma dos valores entre as linhas em destaque
    for (int j = 0; j < COLUNAS; j++) {
        somaLinha1 += matriz[linhaDestaque1][j];
        somaLinha2 += matriz[linhaDestaque2][j];
    }

    printf("\nSoma dos valores na linha %d: %d\n", linhaDestaque1 + 1, somaLinha1);
    printf("Soma dos valores na linha %d: %d\n", linhaDestaque2 + 1, somaLinha2);

    // Determina a maior soma entre as linhas
    if (somaLinha1 > somaLinha2) {
        maiorSoma = somaLinha1;
    } else {
        maiorSoma = somaLinha2;
    }

    printf("\nMaior soma entre as linhas em destaque: %d\n", maiorSoma);

    return 0;
}
