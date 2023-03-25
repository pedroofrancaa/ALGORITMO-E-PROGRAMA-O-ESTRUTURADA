// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATRÍCULA: UC22200628
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// TURMA: GPE17M0131
// PROFESSOR: Osman Brás de Souto
// LISTA 2 - QUESTÃO 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(){
    setlocale(LC_ALL, "Portuguese");

   // Declara as variáveis necessárias para armazenar as notas e a média.
    float nota1, nota2, nota3, nota4, media;

    // Solicita ao usuário que digite as quatro notas.
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Calcula a média das quatro notas.
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    // Exibe a média com duas casas decimais.
    printf("\nMédia: %.2f\n", media);

    // Exibe uma mensagem de acordo com a média obtida.
    if (media >= 0.0 && media <= 3.0) {
        printf(ANSI_COLOR_RED "\nREPROVADO\n" ANSI_COLOR_RESET);
    } else if (media >= 3.1 && media <= 6.9) {
        printf(ANSI_COLOR_BLUE "\nRECUPERAÇÃO\n" ANSI_COLOR_RESET);
    } else if (media >= 7.0) {
        printf(ANSI_COLOR_GREEN "\nAPROVADO\n" ANSI_COLOR_RESET);
    }

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}
