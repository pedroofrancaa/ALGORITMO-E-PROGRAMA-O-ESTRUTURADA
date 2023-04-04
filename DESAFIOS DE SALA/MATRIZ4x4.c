// Realiza a leitura de uma matriz 4x4 de números inteiros a partir da entrada do usuário, imprime essa matriz na tela e em seguida calcula a soma dos elementos da diagonal principal e a multiplicação dos elementos da diagonal secundária da matriz.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese"); // Define a localização para português do Brasil

    int i, j, soma, mult;
    int mat [4][4]; // Cria uma matriz 4x4 de números inteiros

    // Loop para preencher a matriz com os valores informados pelo usuário
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            printf ("Elementos: [%d][%d] = ", i, j);
            scanf ("%d", &mat[i][j]); // Lê o valor informado pelo usuário e o armazena na posição correspondente da matriz
            fflush (stdin); // Limpa o buffer de entrada de dados
        }
    }

    printf ("\n");

    // Loop para imprimir a matriz na tela
    for (i=0;i<4;i++) {
        for (j=0;j<4;j++) {
            printf ("%d", mat[i][j]); // Imprime o valor armazenado na posição correspondente da matriz
        }
        printf ("\n"); // Quebra a linha para imprimir a próxima linha da matriz
    }

    // Calcula a soma dos elementos da diagonal principal da matriz
    soma = mat [0][0] + mat [1][1] + mat [2][2] + mat [3][3];
    // Calcula a multiplicação dos elementos da diagonal secundária da matriz
    mult = mat [0][3] * mat [1][2] * mat [2][1] * mat [3][0];

    // Imprime a soma e a multiplicação calculadas anteriormente na tela
    printf ("\nSoma = %d \n", soma);
    printf ("Multiplicação = %d \n", mult);
} // Fim da função main() e do programa (INT)
