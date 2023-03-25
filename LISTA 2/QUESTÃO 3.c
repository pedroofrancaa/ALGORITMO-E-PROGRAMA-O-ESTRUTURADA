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

    int num1, num2, num3, maior, menor;

    // Declara��o das vari�veis utilizadas no programa
    // num1, num2, num3: n�meros fornecidos pelo usu�rio
    // maior, menor: armazenam o maior e o menor n�mero, respectivamente

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &num1);
    printf("Digite o segundo n�mero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro n�mero: ");
    scanf("%d", &num3);

    // Solicita ao usu�rio os 3 n�meros que ser�o comparados

    // Verifica o maior n�mero
    if (num1 > num2 && num1 > num3) {
        maior = num1;
    } else if (num2 > num1 && num2 > num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    // Compara os 3 n�meros e armazena o maior valor na vari�vel "maior"

    // Verifica o menor n�mero
    if (num1 < num2 && num1 < num3) {
        menor = num1;
    } else if (num2 < num1 && num2 < num3) {
        menor = num2;
    } else {
        menor = num3;
    }

    // Compara os 3 n�meros e armazena o menor valor na vari�vel "menor"

    // Exibe o resultado
    if (num1 == num2 && num2 == num3) {
        printf("\nN�meros iguais\n");
    } else {
        printf("\nMaior n�mero: %d\n", maior);
        printf("Menor n�mero: %d\n", menor);
    }

    // Verifica se os 3 n�meros s�o iguais e exibe a mensagem correspondente,
    // ou exibe o maior e o menor n�mero, caso contr�rio

    return 0;
}
