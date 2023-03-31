// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// QUESTÃO 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, i;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("\nNúmeros de %d até 0 em ordem decrescente:\n\n", num);

    for (i = num; i >= 0; i--) {
        printf("%d ", i);
    }

    return 0;
}
