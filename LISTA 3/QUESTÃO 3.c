// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// QUEST�O 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int num, i;

    printf("Digite um n�mero inteiro: ");
    scanf("%d", &num);

    printf("\nN�meros de %d at� 0 em ordem decrescente:\n\n", num);

    for (i = num; i >= 0; i--) {
        printf("%d ", i);
    }

    return 0;
}
