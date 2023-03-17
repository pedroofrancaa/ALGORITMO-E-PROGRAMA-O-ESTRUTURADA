// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATRÍCULA: UC22200628
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// TURMA: GPE17M0131
// PROFESSOR: Osman Brás de Souto
// QUESTÃO 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, num4, media;

    printf("PROGRAMA PARA CALCULAR A MÉDIA ENTRE 4 NÚMEROS\n");
    printf("Por favor, use \",\" como separador de valores\n\n");

    printf("Informe o 1º valor: ");
    scanf("%f", &num1);

    printf("Informe o 2º valor: ");
    scanf("%f", &num2);

    printf("Informe o 3º valor: ");
    scanf("%f", &num3);

    printf("Informe o 4º valor: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4) / 4; // Calcula a média

    printf("\nA média dos valores informados é: %.2f\n", media);

    return 0;
}



