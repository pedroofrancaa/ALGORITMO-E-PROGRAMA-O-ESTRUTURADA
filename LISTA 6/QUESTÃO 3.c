// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA 6
// QUESTÃO 3

#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    int *ptr = &numero;

    *ptr = 42;

    printf("Formato após a atribuição: %d\n", *ptr);

    return 0;
}
