// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE I
// QUEST�O 10

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define NUM_ALUNOS 15

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

    float notas[NUM_ALUNOS];
    float soma = 0;

    // L� as notas dos alunos
    printf("Informe as notas dos %d alunos (use , para n�meros decimais:\n", NUM_ALUNOS);
    for (int i = 0; i < NUM_ALUNOS; i++) {
        printf("Nota do aluno %d: ", i+1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    // Calcula e exibe a m�dia geral
    float media = soma / NUM_ALUNOS;
    printf("\nA media geral das notas �: %.2f\n", media);

    return 0;
}
