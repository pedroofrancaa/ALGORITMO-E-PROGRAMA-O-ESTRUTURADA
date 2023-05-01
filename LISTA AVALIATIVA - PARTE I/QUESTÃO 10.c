// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 10

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUM_ALUNOS 15

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

    float notas[NUM_ALUNOS];
    float soma = 0;

    // Lê as notas dos alunos
    printf("Informe as notas dos %d alunos (use , para números decimais:\n", NUM_ALUNOS);
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Calcula e exibe a média geral
    float media = soma / NUM_ALUNOS;
    printf("\nA media geral das notas é: %.2f\n", media);

    return 0;
}
