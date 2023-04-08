// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA 4
// QUEST�O 3

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

    int colunaDestaque = 1;
    int multiplicacao = 1;

    printf("Matriz original:\n");
    // Exibe a matriz original
    for (int i = 0; i < LINHAS; i++) {
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nColuna de destaque (coluna %d):\n", colunaDestaque + 1); // Adiciona +1 para exibir o n�mero da coluna corretamente

    // Exibe a coluna de destaque
    for (int i = 0; i < LINHAS; i++) {
        printf("%d\n", matriz[i][colunaDestaque]);
        multiplicacao *= matriz[i][colunaDestaque];
    }

    printf("\nO Resultado da Multiplicacao �: %d\n", multiplicacao); // Exibe apenas o resultado da multiplica��o

    return 0;
}
