// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MATR�CULA: UC22200628
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// TURMA: GPE17M0131
// PROFESSOR: Osman Br�s de Souto
// QUEST�O 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, num4, media;

    printf("PROGRAMA PARA CALCULAR A M�DIA ENTRE 4 N�MEROS\n");
    printf("Por favor, use \",\" como separador de valores\n\n");

    printf("Informe o 1� valor: ");
    scanf("%f", &num1);

    printf("Informe o 2� valor: ");
    scanf("%f", &num2);

    printf("Informe o 3� valor: ");
    scanf("%f", &num3);

    printf("Informe o 4� valor: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4) / 4; // Calcula a m�dia

    printf("\nA m�dia dos valores informados �: %.2f\n", media);

    return 0;
}



