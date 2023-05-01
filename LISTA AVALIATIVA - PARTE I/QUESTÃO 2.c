// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

    int valores[6];
    int i;

    // lê 6 valores inteiros
    for (i = 0; i < 6; i++) {
        printf("Digite o %dº valor inteiro: ", i+1);
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







