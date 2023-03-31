// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// QUESTÃO 5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, soma = 0;

    printf("Digite números até que a soma seja pelo menos 30:\n\n");

    while (soma < 30) {
        printf("Número: ");
        scanf("%d", &num);
        soma += num;
    }

    printf("\nA soma dos números é: %d\n", soma);

    return 0;
}
