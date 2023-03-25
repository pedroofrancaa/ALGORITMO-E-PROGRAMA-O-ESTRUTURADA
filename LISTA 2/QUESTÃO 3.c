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

    int num1, num2, num3, maior, menor;

    // Declaração das variáveis utilizadas no programa
    // num1, num2, num3: números fornecidos pelo usuário
    // maior, menor: armazenam o maior e o menor número, respectivamente

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    // Solicita ao usuário os 3 números que serão comparados

    // Verifica o maior número
    if (num1 > num2 && num1 > num3) {
        maior = num1;
    } else if (num2 > num1 && num2 > num3) {
        maior = num2;
    } else {
        maior = num3;
    }

    // Compara os 3 números e armazena o maior valor na variável "maior"

    // Verifica o menor número
    if (num1 < num2 && num1 < num3) {
        menor = num1;
    } else if (num2 < num1 && num2 < num3) {
        menor = num2;
    } else {
        menor = num3;
    }

    // Compara os 3 números e armazena o menor valor na variável "menor"

    // Exibe o resultado
    if (num1 == num2 && num2 == num3) {
        printf("\nNúmeros iguais\n");
    } else {
        printf("\nMaior número: %d\n", maior);
        printf("Menor número: %d\n", menor);
    }

    // Verifica se os 3 números são iguais e exibe a mensagem correspondente,
    // ou exibe o maior e o menor número, caso contrário

    return 0;
}
