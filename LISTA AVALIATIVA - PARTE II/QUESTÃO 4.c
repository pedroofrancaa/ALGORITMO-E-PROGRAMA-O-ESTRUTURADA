// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE II
// QUEST�O 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {

    float x, y;

    // Leitura da coordenada x
    printf("Digite o valor da coordenada x (ultizar . para decimais): ");
    scanf("%f", &x);

    // Leitura da coordenada y
    printf("Digite o valor da coordenada y (ultilzar . para decimais) : ");
    scanf("%f", &y);

    printf ("\n\n");

    // Verifica��o do quadrante
    if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else if (y == 0) {
        printf("Eixo X\n");
    } else {
        if (x > 0) {
            if (y > 0) {
                printf("Q1\n");
            } else {
                printf("Q4\n");
            }
        } else {
            if (y > 0) {
                printf("Q2\n");
            } else {
                printf("Q3\n");
            }
        }
    }

    return 0;
}

