// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA 5
// QUEST�O 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Fun��o recursiva para calcular o fatorial de um n�mero
unsigned long long int fatorial(int n) {
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return n * fatorial(n - 1);
  }
}

int main() {
  int i;
  for (i = 30; i <= 33; i++) {
    printf("Fatorial de %d: %llu\n", i, fatorial(i));
  }
  return 0;
}
