// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE II
// QUESTÃO 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

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

    printf("\n\nA distancia entre os pontos (%.2f,%.2f) e (%.2f,%.2f) é: %.4f\n\n", x1, y1, x2, y2, distancia);

    return 0;
}
