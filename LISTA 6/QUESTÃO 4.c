// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA 6
// QUEST�O 4


#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define MAX_SIZE 100

struct Pilha {
    int dados[MAX_SIZE];
    int topo;
};

void inicializarPilha(struct Pilha *pilha) {
    pilha->topo = -1;
}

int pilhaVazia(struct Pilha *pilha) {
    return (pilha->topo == -1);
}

int pilhaCheia(struct Pilha *pilha) {
    return (pilha->topo == MAX_SIZE - 1);
}

void push(struct Pilha *pilha, int valor) {
    if (pilhaCheia(pilha)) {
        printf("A pilha est� cheia. N�o � poss�vel inserir mais elementos.\n");
        return;
    }
    pilha->dados[++pilha->topo] = valor;
}

int pop(struct Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("A pilha est� vazia. N�o � poss�vel remover elementos.\n");
        return -1;
    }
    return pilha->dados[pilha->topo--];
}

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct Pilha pilha;
    inicializarPilha(&pilha);

    int *ptr1 = malloc(sizeof(int));
    int *ptr2 = malloc(sizeof(int));

    printf("Digite o valor 1: ");
    scanf("%d", ptr1);
    push(&pilha, *ptr1);

    printf("Digite o valor 2: ");
    scanf("%d", ptr2);
    push(&pilha, *ptr2);

    printf("\nValores da pilha:\n");
    while (!pilhaVazia(&pilha)) {
        printf("%d\n", pop(&pilha));
    }

    free(ptr1);
    free(ptr2);

    return 0;
}
