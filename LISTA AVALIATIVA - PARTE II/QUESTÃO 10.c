// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE II
// QUEST�O 10

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

    int numeros[10], soma = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numeros[i]);
        soma += numeros[i];
    }

    float media = soma / 10.0;

    printf("\n\nA media dos numeros digitados e: %.2f", media);

    return 0;
}
