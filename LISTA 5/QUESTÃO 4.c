// UNIVERSIDADE CATÓLICA DE BRASÍLIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRANÇA DE LIMA
// MATÉRIA: ALGORITMO E PROGRAMAÇÃO ESTRUTURADA
// PROFESSOR: Osman Brás de Souto
// LISTA 5
// QUESTÃO 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Macro para verificar se a idade é maior ou igual a 18 anos
#define MAIOR_DE_IDADE(idade) (idade >= 18)

int main() {
  setlocale(LC_ALL, "Portuguese");

  char nome[100];
  int idade;

  // Leitura do nome e idade
  printf("Digite o nome: ");
  fgets(nome, sizeof(nome), stdin);
  nome[strcspn(nome, "\n")] = '\0'; // Remover o caractere de nova linha do final do nome

  printf("Digite a idade: ");
  scanf("%d", &idade);

  // Utilização da macro para verificar se é maior ou menor de idade
  if (MAIOR_DE_IDADE(idade)) {
    printf("\n%s é Maior de Idade.\n", nome);
  } else {
    printf("%s é Menor de Idade.\n", nome);
  }

  return 0;
}
