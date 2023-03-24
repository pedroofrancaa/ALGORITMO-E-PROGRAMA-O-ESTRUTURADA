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

int main(){
    setlocale(LC_ALL, "Portuguese");


    // Variável - DDD: Informa o DDD / opcao: para saber se deseja continuar ou sair.
    int ddd;
    char opcao;

    printf ("\nPROGRAMA QUE VERIFICA A LOCALIDADE DO DDD\n");

    do
    {
        // Solicitando ao usuário que informe o DDD
        printf("\nInforme o número do DDD: ");
        scanf("%d", &ddd);

        // Verificando o valor do DDD usando o comando switch
        switch (ddd)
        {
            // Se o valor for 61
            case 61:
                printf("\nBrasília\n");
                break;

            // Se o valor for 71
            case 71:
                printf("\nSalvador\n");
                break;

            case 11:
                printf("\nSão Paulo\n");
                break;

            // Se o valor for 21
            case 21:
                printf("\nRio de Janeiro\n");
                break;

            // Se o valor for 32
            case 32:
                printf("\nJuiz de Fora\n");
                break;

            // Se o valor for 19
            case 19:
                printf("\nCampinas\n");
                break;

            // Se o valor for 27
            case 27:
                printf("\nVitória\n");
                break;

            // Se o valor for 31
            case 31:
                printf("\nBelo Horizonte\n");
                break;

            // Se o valor não for nenhum dos valores esperados,
            default:
                printf("\nDDD não encontrado.\n");
                break;
        }

        // Solicitando ao usuário que informe se deseja verificar um novo DDD
        printf("\nDeseja verificar outro DDD? (S para sim/N para não) ");

        // Lendo a opção do usuário
        scanf(" %c", &opcao);

        // Convertendo a letra para maiúscula
        opcao = toupper(opcao);

    } while (opcao == 'S');

    return 0;
}
