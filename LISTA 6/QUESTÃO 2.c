// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA 6
// QUEST�O 2

#include <stdio.h>
#include <locale.h>

void funcaoTroca(int *ptr) {
    *ptr = *ptr * 2;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int numero;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    printf("\nAntes da chamada da fun��o: %d\n", numero);

    funcaoTroca(&numero);

    printf("Ap�s a chamada da fun��o: %d\n", numero);

    return 0;
}

