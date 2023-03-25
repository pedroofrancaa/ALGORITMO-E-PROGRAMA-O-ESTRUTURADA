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

int main(){
    setlocale(LC_ALL, "Portuguese");


    // Vari�vel - DDD: Informa o DDD / opcao: para saber se deseja continuar ou sair.
    int ddd;
    char opcao;

    printf ("\nPROGRAMA QUE VERIFICA A LOCALIDADE DO DDD\n");

    do
    {
        // Solicitando ao usu�rio que informe o DDD
        printf("\nInforme o n�mero do DDD: ");
        scanf("%d", &ddd);

        // Verificando o valor do DDD usando o comando switch
        switch (ddd)
        {
            // Se o valor for 61
            case 61:
                printf("\nBras�lia\n");
                break;

            // Se o valor for 71
            case 71:
                printf("\nSalvador\n");
                break;

            case 11:
                printf("\nS�o Paulo\n");
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
                printf("\nVit�ria\n");
                break;

            // Se o valor for 31
            case 31:
                printf("\nBelo Horizonte\n");
                break;

            // Se o valor n�o for nenhum dos valores esperados,
            default:
                printf("\nDDD n�o encontrado.\n");
                break;
        }

        // Solicitando ao usu�rio que informe se deseja verificar um novo DDD
        printf("\nDeseja verificar outro DDD? (S para sim/N para n�o) ");

        // Lendo a op��o do usu�rio
        scanf(" %c", &opcao);

        // Convertendo a letra para mai�scula
        opcao = toupper(opcao);

    } while (opcao == 'S');

    return 0;
}
