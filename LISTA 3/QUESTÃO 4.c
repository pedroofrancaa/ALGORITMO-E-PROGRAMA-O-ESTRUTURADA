// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// QUEST�O 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idades[TAM], soma = 0, media, i;

    printf("Digite as idades de at� 5 pessoas:\n\n");

    for (i = 0; i < TAM; i++) {
        printf("Idade %d: ", i+1);
        scanf("%d", &idades[i]);
        soma += idades[i];
    }

    media = soma / TAM;
    printf("\nA m�dia das idades �: %d\n", media);

    printf("\nAs idades maiores que 18 anos s�o: ");
    for (i = 0; i < TAM; i++) {
        if (idades[i] > 18) {
            printf("%d ", idades[i]);
        }
    }

    printf ("\n");

    return 0;
}
