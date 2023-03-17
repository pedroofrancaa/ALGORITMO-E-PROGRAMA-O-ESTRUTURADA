// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATRÍCULA: UC22200628
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// TURMA: GPE17M0131
// PROFESSOR: Osman Brás de Souto
// QUESTÃO 1

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    char opcao; // Variável para armazenar a opção do usuário

    do {
        float custo, frete, despesas, venda, lucro;

        // Printf para informar os valores

        printf("Abaixo informe os custos solicitados para o cálculo\n");
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

        printf("\nA porcentagem de lucro da mercadoria é de: %.2f%%\n\n", lucro);

        printf("Deseja realizar um novo cálculo? (S para sim /N para não): ");
        scanf(" %c", &opcao);

    } while (opcao == 'S' || opcao == 's'); // Executa enquanto a opção for 'S' ou 's'

    return 0;
}
