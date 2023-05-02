// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE II
// QUESTÃO 8

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português
    int num, maior, menor;

    printf("Digite um número inteiro (negativo para sair): ");
    scanf("%d", &num);

    maior = menor = num;

    while(num >= 0)
    {
        if(num > maior)
            maior = num;
        if(num < menor)
            menor = num;

        printf("Digite outro número inteiro (negativo para sair): ");
        scanf("%d", &num);
    }

    printf("\n\n");
    printf("O maior número lido foi: %d\n", maior);
    printf("O menor número lido foi: %d\n", menor);

    return 0;
}
