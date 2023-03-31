// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// QUESTÃO 2

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


