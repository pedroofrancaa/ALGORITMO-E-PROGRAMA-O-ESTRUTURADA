// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA AVALIATIVA - PARTE II
// QUEST�O 3

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define PI 3.14159 // Defini��o da constante PI

int main() {
    setlocale(LC_ALL, "Portuguese"); // Configurar o locale para Portugu�s]

    float raio, volume, area;

    // Leitura do raio da esfera
    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);

    // C�lculo do volume e da �rea da esfera
    volume = (4.0 / 3) * PI * raio * raio * raio;
    area = 4 * PI * raio * raio;

    // Exibi��o dos resultados
    printf("\n\n8A area da superficie da esfera �: %.2f\n", area);
    printf("O volume da esfera �: %.2f\n", volume);

    return 0;
}



