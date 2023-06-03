// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA 6
// QUEST�O 1

#include <stdio.h>
#include <locale.h>

void trocar(int *ptr, int *num) {
    int temp = *ptr;
    *ptr = *num;
    *num = temp;
}

int main() {
    setlocale(LC_ALL, "Portuguese");
    int num;
    printf("--- Digite um n�mero inteiro: ");
    scanf("%d", &num);

    int ptr_value;
    printf("--- Digite o valor do ponteiro: ");
    scanf("%d", &ptr_value);

    int *ptr = &ptr_value;

    printf("\n--- Antes da troca: num = %d, *ptr = %d\n", num, *ptr);

    trocar(ptr, &num);

    printf("--- Depois da troca: num = %d, *ptr = %d\n", num, *ptr);

    char resposta;
    printf("\nDeseja tentar novamente? (S/N): ");
    scanf(" %c", &resposta);

    if (resposta == 'S' || resposta == 's') {
        main(); // Chama a fun��o main novamente para reiniciar o programa
    }

    return 0;
}

