// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE I
// QUESTÃO 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define TAMANHO_CONJUNTO 10

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

    int conjunto[TAMANHO_CONJUNTO];
    int conjunto_quadrado[TAMANHO_CONJUNTO];

        // Lendo o conjunto de números reais
    wprintf(L"Informe os 10 números do conjunto:\n");
    for(int i = 0; i < TAMANHO_CONJUNTO; i++) {
        wprintf(L"Elemento %d: ", i+1);
        scanf("%d", &conjunto[i]);
    }

    // Calculando o quadrado de cada componente e armazenando no segundo conjunto
    for(int i = 0; i < TAMANHO_CONJUNTO; i++) {
        conjunto_quadrado[i] = conjunto[i] * conjunto[i];
    }

    // Imprimindo ambos os conjuntos
    printf("\nConjunto original: ");
    for(int i = 0; i < TAMANHO_CONJUNTO; i++) {
        printf("%d ", conjunto[i]);
    }

    printf("\n\nConjunto ao quadrado: ");
    for(int i = 0; i < TAMANHO_CONJUNTO; i++) {
            printf("%d ", conjunto_quadrado[i]);
    }

    return 0;
}
