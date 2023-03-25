// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MATR�CULA: UC22200628
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// TURMA: GPE17M0131
// PROFESSOR: Osman Br�s de Souto
// QUEST�O 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    char opcao; // Vari�vel para armazenar a op��o do usu�rio

    do {
        float custo, frete, despesas, venda, lucro;

        // Printf para informar os valores

        printf("Abaixo informe os custos solicitados para o c�lculo\n");
        printf ("Por favor, usar \",\", como separador de valores\n\n");

        printf("Custo da mercadoria: ");
        scanf("%f", &custo);

        printf("Valor do frete: ");
        scanf("%f", &frete);

        printf("Valor das despesas: ");
        scanf("%f", &despesas);

        venda = custo + frete + despesas; // Calcula o valor de venda da mercadoria somando o custo, o frete e as despesas

        printf("Valor de venda: ");
        scanf("%f", &venda);

        // FIM

        lucro = ((venda - custo - frete - despesas) / custo) * 100; // Calcula a porcentagem de lucro da mercadoria

        printf("\nA porcentagem de lucro da mercadoria � de: %.2f%%\n\n", lucro);

        printf("Deseja realizar um novo c�lculo? (S para sim /N para n�o): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's'); // Executa enquanto a op��o for 'S' ou 's'

    return 0;
}
