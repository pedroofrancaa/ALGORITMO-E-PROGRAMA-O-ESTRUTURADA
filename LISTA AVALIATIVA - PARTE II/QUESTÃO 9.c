// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE II
// QUEST�O 9

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

    int opcao, quantidade;
    float total = 0;

    do {
        printf("\n\n Selecione uma fruta:\n");
        printf("1 - Abacaxi (R$ 5,00 a unidade)\n");
        printf("2 - Maca (R$ 1,00 a unidade)\n");
        printf("3 - Pera (R$ 4,00 a unidade)\n");
        printf("0 - Sair\n");

        printf ("\nSelecione a fruta: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 0:
                printf("Saindo...\n");
                break;
            case 1:
                printf("Digite a quantidade de abacaxis: ");
                scanf("%d", &quantidade);
                total += quantidade * 5;
                printf("Total: R$ %.2f\n", total);
                break;
            case 2:
                printf("Digite a quantidade de macas: ");
                scanf("%d", &quantidade);
                total += quantidade;
                printf("Total: R$ %.2f\n", total);
                break;
            case 3:
                printf("Digite a quantidade de peras: ");
                scanf("%d", &quantidade);
                total += quantidade * 4;
                printf("Total: R$ %.2f\n", total);
                break;
            default:
                printf("Opcao invalida!\n");
        }
    } while(opcao != 0);

    return 0;
}
