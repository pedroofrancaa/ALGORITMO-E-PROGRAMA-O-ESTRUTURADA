// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português
    int A[6] = {1, 0, 5, -2, -5, 7}; // (a)

    int soma = A[0] + A[1] + A[5]; // (b)
    printf("Soma: %d\n", soma);

    A[4] = 100; // (c)

    printf("\nValores do vetor A:\n");
    for (int i = 0; i < 6; i++) { // (d)
        printf("%d\n", A[i]);
    }

    return 0;
}
