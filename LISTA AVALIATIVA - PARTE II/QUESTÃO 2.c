// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE II
// QUEST�O 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

    float x1, y1, x2, y2, distancia;

    printf("Informe o valor de x1: ");
    scanf("%f", &x1);

    printf("Informe o valor de y1: ");
    scanf("%f", &y1);

    printf("Informe o valor de x2: ");
    scanf("%f", &x2);

    printf("Informe o valor de y2: ");
    scanf("%f", &y2);

    distancia = sqrt(pow((x2-x1), 2) + pow((y2-y1), 2));

    printf("\n\nA distancia entre os pontos (%.2f,%.2f) e (%.2f,%.2f) �: %.4f\n\n", x1, y1, x2, y2, distancia);

    return 0;
}
