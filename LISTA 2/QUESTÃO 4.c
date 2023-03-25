// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MATR�CULA: UC22200628
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// TURMA: GPE17M0131
// PROFESSOR: Osman Br�s de Souto
// LISTA 2 - QUEST�O 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define ANSI_COLOR_RED     "\x1b[31m"
#define ANSI_COLOR_GREEN   "\x1b[32m"
#define ANSI_COLOR_BLUE    "\x1b[34m"
#define ANSI_COLOR_RESET   "\x1b[0m"

int main(){
    setlocale(LC_ALL, "Portuguese");

   // Declara as vari�veis necess�rias para armazenar as notas e a m�dia.
    float nota1, nota2, nota3, nota4, media;

    // Solicita ao usu�rio que digite as quatro notas.
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Calcula a m�dia das quatro notas.
    media = (nota1 + nota2 + nota3 + nota4) / 4.0;

    // Exibe a m�dia com duas casas decimais.
    printf("\nM�dia: %.2f\n", media);

    // Exibe uma mensagem de acordo com a m�dia obtida.
    if (media >= 0.0 && media <= 3.0) {
        printf(ANSI_COLOR_RED "\nREPROVADO\n" ANSI_COLOR_RESET);
    } else if (media >= 3.1 && media <= 6.9) {
        printf(ANSI_COLOR_BLUE "\nRECUPERA��O\n" ANSI_COLOR_RESET);
    } else if (media >= 7.0) {
        printf(ANSI_COLOR_GREEN "\nAPROVADO\n" ANSI_COLOR_RESET);
    }

    // Retorna 0 para indicar que o programa foi executado com sucesso.
    return 0;
}
