// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// QUESTÃO 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;

    printf("Números inteiros de 1 a 15 em ordem decrescente:\n\n");

    for (i = 15; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}
