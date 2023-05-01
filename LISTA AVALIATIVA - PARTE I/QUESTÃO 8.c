// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 8

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

    int valores[6];

    // Lê os valores do vetor
    printf("Informe os valores:\n");
    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &valores[i]);
    }

    // Exibe os valores lidos na ordem inversa
    printf("\nValores lidos na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
