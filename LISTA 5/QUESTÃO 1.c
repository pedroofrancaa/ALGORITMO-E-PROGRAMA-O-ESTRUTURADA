// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA 5
// QUESTÃO 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Macros para realizar as operações matemáticas
#define SOMAR(a, b) ((a) + (b))
#define SUBTRAIR(a, b) ((a) - (b))
#define DIVIDIR(a, b) ((b) != 0 ? ((float)(a) / (b)) : 0)
#define MULTIPLICAR(a, b) ((a) * (b))

int main() {
  setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

  int num1, num2;
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  // Utilização das macros para realizar as operações matemáticas
  printf("\nSoma: %d\n", SOMAR(num1, num2));
  printf("Subtração: %d\n", SUBTRAIR(num1, num2));
  printf("Divisão: %.2f\n", DIVIDIR(num1, num2));
  printf("Multiplicação: %d\n", MULTIPLICAR(num1, num2));

  return 0;
}
