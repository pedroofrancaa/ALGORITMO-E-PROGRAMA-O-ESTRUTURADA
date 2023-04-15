// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA 5
// QUEST�O 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Macros para realizar as opera��es matem�ticas
#define SOMAR(a, b) ((a) + (b))
#define SUBTRAIR(a, b) ((a) - (b))
#define DIVIDIR(a, b) ((b) != 0 ? ((float)(a) / (b)) : 0)
#define MULTIPLICAR(a, b) ((a) * (b))

int main() {
  setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

  int num1, num2;
  printf("Digite o primeiro n�mero: ");
  scanf("%d", &num1);
  printf("Digite o segundo n�mero: ");
  scanf("%d", &num2);

  // Utiliza��o das macros para realizar as opera��es matem�ticas
  printf("\nSoma: %d\n", SOMAR(num1, num2));
  printf("Subtra��o: %d\n", SUBTRAIR(num1, num2));
  printf("Divis�o: %.2f\n", DIVIDIR(num1, num2));
  printf("Multiplica��o: %d\n", MULTIPLICAR(num1, num2));

  return 0;
}
