// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE I
// QUEST�O 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

    int valores[6];
    int i;

    // l� 6 valores inteiros
    for (i = 0; i < 6; i++) {
        printf("Digite o %d� valor inteiro: ", i+1);
        scanf("%d", &valores[i]);
    }

    // exibe os valores lidos
    printf("\nValores lidos:");
    for (i = 0; i < 6; i++) {
        printf(" %d", valores[i]);
    }
    printf("\n");

    return 0;
}







