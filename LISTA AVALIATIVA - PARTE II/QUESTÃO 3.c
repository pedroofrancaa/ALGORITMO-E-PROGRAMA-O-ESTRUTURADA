// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA AVALIATIVA - PARTE II
// QUESTÃO 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define PI 3.14159 // Definição da constante PI

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Português]

    float raio, volume, area;

    // Leitura do raio da esfera
    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);

    // Cálculo do volume e da área da esfera
    volume = (4.0 / 3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;

    // Exibição dos resultados
    printf("\n\n8A area da superficie da esfera é: %.2f\n", area);
    printf("O volume da esfera é: %.2f\n", volume);

    return 0;
}



