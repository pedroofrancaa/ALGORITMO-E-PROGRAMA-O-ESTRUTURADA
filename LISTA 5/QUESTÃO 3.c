// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA 5
// QUEST�O 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Macro para calcular a m�dia de quatro n�meros
#define CALCULAR_MEDIA(num1, num2, num3, num4) ((num1 + num2 + num3 + num4) / 4.0)

int main() {
  setlocale(LC_ALL, "Portuguese");

  int num1, num2, num3, num4;
  float media;

  // Leitura dos quatro n�meros inteiros
  printf("Digite o primeiro n�mero: ");
  scanf("%d", &num1);

  printf("Digite o segundo n�mero: ");
  scanf("%d", &num2);

  printf("Digite o terceiro n�mero: ");
  scanf("%d", &num3);

  printf("Digite o quarto n�mero: ");
  scanf("%d", &num4);

  // C�lculo da m�dia usando a macro
  media = CALCULAR_MEDIA(num1, num2, num3, num4);

  // Exibi��o do resultado
  printf("\nA m�dia dos quatro n�meros �: %.2f\n", media);

  return 0;
}
