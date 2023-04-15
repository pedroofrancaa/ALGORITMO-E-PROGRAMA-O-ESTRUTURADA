// UNIVERSIDADE CAT�LICA DE BRAS�LIA
// ENGENHARIA DE SOFTWARE
// ALUNO: PEDRO FRAN�A DE LIMA
// MAT�RIA: ALGORITMO E PROGRAMA��O ESTRUTURADA
// PROFESSOR: Osman Br�s de Souto
// LISTA 5
// QUEST�O 4

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

// Macro para verificar se a idade � maior ou igual a 18 anos
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

  // Utiliza��o da macro para verificar se � maior ou menor de idade
  if (MAIOR_DE_IDADE(idade)) {
    printf("\n%s � Maior de Idade.\n", nome);
  } else {
    printf("%s � Menor de Idade.\n", nome);
  }

  return 0;
}
