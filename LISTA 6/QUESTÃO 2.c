// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA 6
// QUESTÃO 2

#include <stdio.h>
#include <locale.h>

void funcaoTroca(int *ptr) {
    *ptr = *ptr * 2;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    printf("\nAntes da chamada da função: %d\n", numero);

    funcaoTroca(&numero);

    printf("Após a chamada da função: %d\n", numero);

    return 0;
}

