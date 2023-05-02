// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE II
// QUESTÃO 10

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

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
