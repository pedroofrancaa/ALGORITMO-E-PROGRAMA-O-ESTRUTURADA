// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// QUEST�O 2

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int i;

    printf("Contagem progressiva e regressiva:\n\n");

    // Contagem progressiva
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
    }

    // Contagem regressiva
    for (i = 9; i >= 1; i--) {
        printf("%d ", i);
    }

    return 0;
}


