// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// QUEST�O 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int i;

    printf("N�meros inteiros de 1 a 15 em ordem decrescente:\n\n");

    for (i = 15; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}
