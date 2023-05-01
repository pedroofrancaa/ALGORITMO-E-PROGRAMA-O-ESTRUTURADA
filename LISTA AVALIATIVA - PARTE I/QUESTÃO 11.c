// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 11

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM_VETOR 10

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

    float vetor[TAM_VETOR];
    int qtd_positivos = 0, qtd_negativos = 0;

    // Lê os números do vetor
    printf("Informe os %d números do vetor:\n", TAM_VETOR);
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("Numero %d: ", i+1);
        scanf("%f", &vetor[i]);

        // Verifica se é positivo ou negativo
        if (vetor[i] > 0) {
            qtd_positivos++;
        } else if (vetor[i] < 0) {
            qtd_negativos++;
        }
    }

    // Exibe a quantidade de positivos e negativos
    printf("\nQuantidade de números positivos: %d\n", qtd_positivos);
    printf("Quantidade de números negativos: %d\n", qtd_negativos);

    return 0;
}
