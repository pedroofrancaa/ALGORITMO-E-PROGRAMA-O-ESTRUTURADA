// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE II
// QUESTÃO 7

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português

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

    printf("O %dº termo da sequência de Fibonacci é: %d\n", n, fib);

    return 0;
}
