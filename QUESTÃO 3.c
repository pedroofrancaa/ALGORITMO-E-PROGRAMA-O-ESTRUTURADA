// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MATR�CULA: UC22200628
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// TURMA: GPE17M0131
// PROFESSOR: Osman Br�s de Souto
// QUEST�O 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float largura, altura, area, tinta, latas;

    printf("PROGRAMA PARA CALCULAR A QUANTIDADE DE LATAS DE TINTA NECESS�RIAS PARA PINTAR UMA PAREDE\n");
    printf("Por favor, use \",\" como separador de valores\n");
    printf("Por favor, informar todos os valores em metros\n");

    printf("\nEsse c�digo considera o consumo de tinta de 300 ml por metro quadrado e que cada lata de tinta tem 2 litros\n\n");

    // Pedindo as medidas da parede em metros
    printf("Largura da parede: ");
    scanf("%f", &largura);
    printf("Altura da parede: ");
    scanf("%f", &altura);

    printf("\nInforma��es do c�lculo\n");

    area = largura * altura; // �rea da parede
    printf("A �rea da parede �: %.2f", area);

    tinta = area * 0.3; // Quantidade de tinta (litros)
    printf("\nQuantidade de tinta (litros): %.2f", tinta);

    latas = tinta / 2; // Quantidade de latas necess�rias

    // Arredondando para cima
    latas = ceil(latas);

    // Exibindo o resultado
    printf("\n\nSer�o necess�rias %.0f latas de tinta.\n", latas);

    return 0;
}

