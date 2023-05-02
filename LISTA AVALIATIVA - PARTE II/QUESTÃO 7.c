// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE II
// QUEST�O 7

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s

    int n, a = 0, b = 1, fib;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Erro: n deve ser maior ou igual a zero.\n");
        return 1;
    }
    else if (n == 0)
    {
        fib = a;
    }
    else if (n == 1)
    {
        fib = b;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            fib = a + b;
            a = b;
            b = fib;
        }
    }

    printf("O %d� termo da sequ�ncia de Fibonacci �: %d\n", n, fib);

    return 0;
}
