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

    float salario, prestacao;

    // Salário
    printf("Informe o salário do trabalhador: ");
    scanf("%f", &salario);

    // Prestação
    printf("Informe o valor da prestação: ");
    scanf("%f", &prestacao);

    // Verificando se o valor da prestação é maior que 20% do salário
    if (prestacao > salario * 0.2)
    {
        // Se o valor da prestação for maior que 20% do salário,
        printf("\nEmpréstimo não concedido.\n");
    }
    else
    {
        // Se o valor da prestação for menor ou igual a 20% do salário,
        printf("\nEmpréstimo concedido.\n");
    }

    return 0;
}
