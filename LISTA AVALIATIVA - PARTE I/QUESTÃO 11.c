// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE I
// QUEST�O 11

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAM_VETOR 10

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

    float vetor[TAM_VETOR];
    int qtd_positivos = 0, qtd_negativos = 0;

    // L� os n�meros do vetor
    printf("Informe os %d n�meros do vetor:\n", TAM_VETOR);
    for (int i = 0; i < TAM_VETOR; i++) {
        printf("Numero %d: ", i+1);
        scanf("%f", &vetor[i]);

        // Verifica se � positivo ou negativo
        if (vetor[i] > 0) {
            qtd_positivos++;
        } else if (vetor[i] < 0) {
            qtd_negativos++;
        }
    }

    // Exibe a quantidade de positivos e negativos
    printf("\nQuantidade de n�meros positivos: %d\n", qtd_positivos);
    printf("Quantidade de n�meros negativos: %d\n", qtd_negativos);

    return 0;
}
