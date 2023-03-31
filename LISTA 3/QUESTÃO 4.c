// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// QUESTÃO 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM 5

int main() {
    setlocale(LC_ALL, "Portuguese");

    int idades[TAM], soma = 0, media, i;

    printf("Digite as idades de até 5 pessoas:\n\n");

    for (i = 0; i < TAM; i++) {
        printf("Idade %d: ", i+1);
        scanf("%d", &idades[i]);
        soma += idades[i];
    }

    media = soma / TAM;
    printf("\nA média das idades é: %d\n", media);

    printf("\nAs idades maiores que 18 anos são: ");
    for (i = 0; i < TAM; i++) {
        if (idades[i] > 18) {
            printf("%d ", idades[i]);
        }
    }

    printf ("\n");

    return 0;
}
