// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MATR�CULA: UC22200628
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// TURMA: GPE17M0131
// PROFESSOR: Osman Br�s de Souto
// QUEST�O 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    float raio, area;
    const float PI = 3.14159;

    printf ("PROGRAMA PARA CALCULAR O RAIO DE UM CIRCULO\n\n");

    printf("Digite o raio do circulo (em metros): ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("\nA area do circulo �: %f \n\n", area);

    return 0;
}
