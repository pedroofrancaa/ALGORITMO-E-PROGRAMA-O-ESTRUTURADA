// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA 5
// QUESTÃO 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função recursiva para calcular o fatorial de um número
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
