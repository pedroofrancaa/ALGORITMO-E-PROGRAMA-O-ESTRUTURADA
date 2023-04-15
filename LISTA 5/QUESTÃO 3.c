// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA 5
// QUESTÃO 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Macro para calcular a média de quatro números
#define CALCULAR_MEDIA(num1, num2, num3, num4) ((num1 + num2 + num3 + num4) / 4.0)

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num1, num2, num3, num4;
  float media;

  // Leitura dos quatro números inteiros
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);

  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  printf("Digite o terceiro número: ");
  scanf("%d", &num3);

  printf("Digite o quarto número: ");
  scanf("%d", &num4);

  // Cálculo da média usando a macro
  media = CALCULAR_MEDIA(num1, num2, num3, num4);

  // Exibição do resultado
  printf("\nA média dos quatro números é: %.2f\n", media);

  return 0;
}
