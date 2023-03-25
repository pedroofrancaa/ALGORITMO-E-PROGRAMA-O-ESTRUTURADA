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

    float salario, prestacao;

    // Sal�rio
    printf("Informe o sal�rio do trabalhador: ");
    scanf("%f", &salario);

    // Presta��o
    printf("Informe o valor da presta��o: ");
    scanf("%f", &prestacao);

    // Verificando se o valor da presta��o � maior que 20% do sal�rio
    if (prestacao > salario * 0.2)
    {
        // Se o valor da presta��o for maior que 20% do sal�rio,
        printf("\nEmpr�stimo n�o concedido.\n");
    }
    else
    {
        // Se o valor da presta��o for menor ou igual a 20% do sal�rio,
        printf("\nEmpr�stimo concedido.\n");
    }

    return 0;
}
