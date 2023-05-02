// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE II
// QUEST�O 8

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s
    int num, maior, menor;

    printf("Digite um n�mero inteiro (negativo para sair): ");
    scanf("%d", &num);

    maior = menor = num;

    while(num >= 0)
    {
        if(num > maior)
            maior = num;
        if(num < menor)
            menor = num;

        printf("Digite outro n�mero inteiro (negativo para sair): ");
        scanf("%d", &num);
    }

    printf("\n\n");
    printf("O maior n�mero lido foi: %d\n", maior);
    printf("O menor n�mero lido foi: %d\n", menor);

    return 0;
}
