// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE I
// QUEST�O 9

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

    int valores[6];

    // L� os valores do vetor
    printf("Informe os valores pares:\n");
    for (int i = 0; i < 6; i++) {
        printf("Valor %d: ", i+1);
        scanf("%d", &valores[i]);
        if (valores[i] % 2 != 0) {
            printf("Erro: o valor informado nao � par, informe outro.\n\n");
            i--;
        }
    }

    // Exibe os valores lidos na ordem inversa
    printf("\nValores lidos na ordem inversa:\n");
    for (int i = 5; i >= 0; i--) {
        printf("%d\n", valores[i]);
    }

    return 0;
}
