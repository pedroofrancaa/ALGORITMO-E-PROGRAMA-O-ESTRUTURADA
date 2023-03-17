// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATRÍCULA: UC22200628
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// TURMA: GPE17M0131
// PROFESSOR: Osman Brás de Souto
// QUESTÃO 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    float largura, altura, area, tinta, latas;

    printf("PROGRAMA PARA CALCULAR A QUANTIDADE DE LATAS DE TINTA NECESSÁRIAS PARA PINTAR UMA PAREDE\n");
    printf("Por favor, use \",\" como separador de valores\n");
    printf("Por favor, informar todos os valores em metros\n");

    printf("\nEsse código considera o consumo de tinta de 300 ml por metro quadrado e que cada lata de tinta tem 2 litros\n\n");

    // Pedindo as medidas da parede em metros
    printf("Largura da parede: ");
    scanf("%f", &largura);
    printf("Altura da parede: ");
    scanf("%f", &altura);

    printf("\nInformações do cálculo\n");

    area = largura * altura; // Área da parede
    printf("A área da parede é: %.2f", area);

    tinta = area * 0.3; // Quantidade de tinta (litros)
    printf("\nQuantidade de tinta (litros): %.2f", tinta);

    latas = tinta / 2; // Quantidade de latas necessárias

    // Arredondando para cima
    latas = ceil(latas);

    // Exibindo o resultado
    printf("\n\nSerão necessárias %.0f latas de tinta.\n", latas);

    return 0;
}

