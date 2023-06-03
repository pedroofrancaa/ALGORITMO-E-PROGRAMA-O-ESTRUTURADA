// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA 6
// QUESTÃO 4


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
        printf("A pilha está cheia. Não é possível inserir mais elementos.\n");
        return;
    }
    pilha->dados[++pilha->topo] = valor;
}

int pop(struct Pilha *pilha) {
    if (pilhaVazia(pilha)) {
        printf("A pilha está vazia. Não é possível remover elementos.\n");
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
