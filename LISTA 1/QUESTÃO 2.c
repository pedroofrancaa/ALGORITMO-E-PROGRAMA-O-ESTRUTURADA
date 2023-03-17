// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATRÍCULA: UC22200628
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// TURMA: GPE17M0131
// PROFESSOR: Osman Brás de Souto
// QUESTÃO 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main() {
    setlocale(LC_ALL, "Portuguese");

    float raio, area;
    const float PI = 3.14159;

    printf ("PROGRAMA PARA CALCULAR O RAIO DE UM CIRCULO\n\n");

    printf("Digite o raio do circulo (em metros): ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("\nA area do circulo é: %f \n\n", area);

    return 0;
}
