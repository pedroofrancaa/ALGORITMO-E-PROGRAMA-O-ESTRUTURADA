// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA 6
// QUEST�O 3

#include <stdio.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "Portuguese");

    int numero;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &numero);

    int *ptr = &numero;

    *ptr = 42;

    printf("Formato ap�s a atribui��o: %d\n", *ptr);

    return 0;
}
