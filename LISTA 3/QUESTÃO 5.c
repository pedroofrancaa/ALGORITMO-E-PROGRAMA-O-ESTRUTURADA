// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// QUEST�O 5

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, soma = 0;

    printf("Digite n�meros at� que a soma seja pelo menos 30:\n\n");

    while (soma < 30) {
        printf("N�mero: ");
        scanf("%d", &num);
        soma += num;
    }

    printf("\nA soma dos n�meros �: %d\n", soma);

    return 0;
}
