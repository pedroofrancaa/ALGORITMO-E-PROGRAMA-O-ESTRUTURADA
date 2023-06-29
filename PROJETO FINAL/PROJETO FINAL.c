#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define MAX_UF 27
#define MAX_NOME 100

typedef struct Marca
{
    char nome[50];
    char telefone[50];
    char site[50];
    char uf[3];
} Marca;

typedef struct Produto
{
    char nome[100];
    char descricao[100];
    float peso;
    float valorc;
    float valorv;
    float perclc;
    float valorlc;
    float percentualLucro;
    struct Marca marca;
} Produto;

const char *unidadesFederacao[MAX_UF] = {
    "AC", "AL", "AP", "AM", "BA", "CE", "DF", "ES", "GO", "MA", "MT", "MS",
    "MG", "PA", "PB", "PR", "PE", "PI", "RJ", "RN", "RS", "RO", "RR", "SC",
    "SP", "SE", "TO"};

void listarProdutosPorValor(Produto produtos[], int numProdutos)
{
    int i, j;

    for (i = 0; i < numProdutos - 1; i++)
    {
        for (j = 0; j < numProdutos - i - 1; j++)
        {
            if (produtos[j].valorv > produtos[j + 1].valorv)
            {
                Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }

    printf("Produtos em ordem crescente de valor:\n");

    for (i = 0; i < numProdutos; i++)
    {
        printf("- %s (R$ %.2f)\n", produtos[i].descricao, produtos[i].valorv);
    }
}

int main(void)
{
    char a, b, c;
    int op, i, j;
    int numProdutos = 0;
    int numMarcas = 0;
    int tamanhoMarcas = 1;  // Tamanho inicial do array de marcas
    int tamanhoProdutos = 1;  // Tamanho inicial do array de produtos

    Marca *marcas = malloc(tamanhoMarcas * sizeof(Marca));
    Produto *produtos = malloc(tamanhoProdutos * sizeof(Produto));

    do
    {
        printf("\tDigite o numero correspondente a opcao desejada:\n\n");

        printf("[0] Cadastrar marca\n");
        printf("[1] Cadastrar produto\n");
        printf("[2] Listar todas as marcas\n");
        printf("[3] Listar todos os produtos\n");
        printf("[4] Listar os produtos de um determinado estado\n");
        printf("[5] Listar os produtos de uma determinada marca\n");
        printf("[6] Apresentar o(s) estado(s) onde está registrado o produto mais caro\n");
        printf("[7] Apresentar o(s) marca(s) onde está registrado o produto mais barato\n");
        printf("[8] Listar todos os produtos em ordem crescente de valor\n");
        printf("[9] Listar todos os produtos em ordem crescente de maior 'valor do lucro'\n");
        printf("[10] Listar todos os produtos em ordem crescente de maior 'percentual de lucro'\n");

        printf("[11] Sair do programa\n");

        printf("\nOpcao: ");
        scanf("%d", &op);
        getchar();

        switch (op)
        {
        case 0:
        {
            i = numMarcas; // Índice para cadastrar marcas

            do
            {
                printf("\nMarca:");
                fgets(marcas[i].nome, sizeof(marcas[i].nome), stdin);

                printf("\nInforme o telefone: ");
                fgets(marcas[i].telefone, sizeof(marcas[i].telefone), stdin);

                printf("\nInforme o site: ");
                fgets(marcas[i].site, sizeof(marcas[i].site), stdin);

                printf("Unidades da Federacao cadastradas:\n");
                for (j = 0; j < MAX_UF; j++)
                {
                    printf("%d. %s\n", j + 1, unidadesFederacao[j]);
                }

                int uf = -1;
                printf("Informe o numero correspondente a sua UF: ");
                scanf("%d", &uf);
                getchar();

                if (uf >= 1 && uf <= MAX_UF)
                {
                    const char *ufEscolhida = unidadesFederacao[uf - 1];
                    strncpy(marcas[i].uf, ufEscolhida, sizeof(marcas[i].uf));
                    marcas[i].uf[sizeof(marcas[i].uf) - 1] = '\0'; // Garantir o término da string
                }
                else
                {
                    printf("Opcao invalida.\n");
                }

                printf("\n");

                printf("Deseja cadastrar mais uma marca? (S/N): ");
                scanf(" %c", &b);
                getchar();

                i++; // Incrementa o índice da marca
                if (i >= tamanhoMarcas) {
                    tamanhoMarcas *= 2;  // Dobrar o tamanho do array
                    marcas = realloc(marcas, tamanhoMarcas * sizeof(Marca));
                }

            } while (b != 'N' && b != 'n');

            numMarcas = i;  // Atualiza o número de marcas cadastradas

            break;
        }

        case 1:
        {
            do
            {
                i = numProdutos; // Índice para cadastrar produtos

                printf("Informe o nome do produto: ");
                fgets(produtos[i].nome, sizeof(produtos[i].nome), stdin);

                printf("Informe a descricao do produto: ");
                fgets(produtos[i].descricao, sizeof(produtos[i].descricao), stdin);
                produtos[i].descricao[strcspn(produtos[i].descricao, "\n")] = '\0'; // Remover o caractere '\n'

                printf("Informe o peso do produto (em kg e somente numeros: ");
                scanf("%f", &produtos[i].peso);
                getchar();

                printf("Informe o valor de compra: ");
                scanf("%f", &produtos[i].valorc);
                getchar();

                printf("Informe o valor de venda: ");
                scanf("%f", &produtos[i].valorv);
                getchar();

                printf("Marca (Digite o indice correspondente):\n");
                for (j = 0; j < numMarcas; j++)
                {
                    printf("%d. %s\n", j, marcas[j].nome);
                }

                int marcaIndice;
                printf("Informe o indice da marca: ");
                scanf("%d", &marcaIndice);
                getchar();

                if (marcaIndice >= 0 && marcaIndice < numMarcas)
                {
                    produtos[i].marca = marcas[marcaIndice];
                }
                else
                {
                    printf("Indice de marca invalido. Escreva o indice entre 0 e %d.\n", numMarcas - 1);
                }

                if (produtos[i].valorc != 0)
                {
                    produtos[i].percentualLucro = ((produtos[i].valorv - produtos[i].valorc) / produtos[i].valorc) * 100;
                }
                else
                {
                    produtos[i].percentualLucro = 0;
                }

                produtos[i].valorlc = produtos[i].valorv - produtos[i].valorc;

                printf("\n");
                numProdutos++; // Incrementa o número de produtos
                if (numProdutos >= tamanhoProdutos) {
                    tamanhoProdutos *= 2;  // Dobrar o tamanho do array
                    produtos = realloc(produtos, tamanhoProdutos * sizeof(Produto));
                }

                printf("Deseja cadastrar mais um produto? (S/N): ");
                scanf(" %c", &b);
                getchar();

            } while (b != 'N' && b != 'n');
            break;
        }

        case 2:
            do
            {
                printf("=============================================\n");
                printf("\tListar todas as marcas\n");
                printf("=============================================\n");
                printf("marca  |   site     |    telefone     |  uf\n");
                printf("---------------------------------------------\n");
                for (i = 0; i < numMarcas; i++)
                {
                    printf("\tMarca %d:\n", i + 1);
                    printf("Nome: %s\t", marcas[i].nome);
                    printf("Site: %s\t", marcas[i].site);
                    printf("Telefone: %s\t", marcas[i].telefone);
                    printf("UF: %s\n\t", marcas[i].uf);
                    printf("\n");
                }

                printf("Digite R para voltar para o menu principal:\n");
                scanf(" %c", &a);

            } while (a != 'R' && a != 'r');
            break;

        case 3:
        {
            do
            {
                printf("====================================================================================================================\n");
                printf("\t\t\t\tListar todos os Produtos\n");
                printf("====================================================================================================================\n");
                printf("Descricao | peso | valor de compra | valor de venda | valor de lucro | percentual de lucro |  Marca\n");
                printf("--------------------------------------------------------------------------------------------------------------------\n");
                for (i = 0; i < numProdutos; i++)
                {
                    printf("\t\t\t\tProduto %d:\n\n", i + 1);
                    printf("Descricao: %s\t\n", produtos[i].descricao);
                    printf("Peso: %.2f\t\n", produtos[i].peso);
                    printf("Valor de Compra: %.2f\t\n", produtos[i].valorc);
                    printf("Valor de Venda: %.2f\t\n", produtos[i].valorv);
                    printf("Valor do Lucro: %.2f\t\n", produtos[i].valorlc);
                    printf("Percentual de Lucro: %.2f%%\t\n", produtos[i].percentualLucro);
                    printf("Marca: %s\n", produtos[i].marca.nome);

                    printf("\n");
                }

                printf("Digite R para voltar para o menu principal:\n");
                scanf(" %c", &a);
                getchar();

            } while (a != 'R' && a != 'r');
            break;
        }

        case 4:
        {
            do
            {
                char estado[3];
                printf("Digite a sigla do estado para listar os produtos: ");
                scanf("%s", estado);
                getchar();

                printf("====================================================================================================================\n");
                printf("\t\t\t\tProdutos no estado %s\n", estado);
                printf("====================================================================================================================\n");
                printf("Descricao | peso | valor de compra | valor de venda | valor de lucro | percentual de lucro |  Marca\n");
                printf("--------------------------------------------------------------------------------------------------------------------\n");

                int encontrado = 0;
                for (i = 0; i < numProdutos; i++)
                {
                    if (strcmp(produtos[i].marca.uf, estado) == 0)
                    {
                        encontrado = 1;
                        printf("\t\t\t\tProduto %d:\n\n", i + 1);
                        printf("Descricao: %s\t", produtos[i].descricao);
                        printf("Peso: %.2f\t", produtos[i].peso);
                        printf("Valor de Compra: %.2f\t", produtos[i].valorc);
                        printf("Valor de Venda: %.2f\t", produtos[i].valorv);
                        printf("Valor do Lucro: %.2f\t", produtos[i].valorlc);
                        printf("Percentual de Lucro: %.2f%%\t", produtos[i].percentualLucro);
                        printf("Marca: %s\n\t", produtos[i].marca.nome);

                        printf("\n");
                    }
                }

                if (!encontrado)
                {
                    printf("Nenhum produto encontrado no estado %s.\n", estado);
                }

                printf("Digite R para voltar para o menu principal:\n");
                scanf(" %c", &a);
                getchar();

            } while (a != 'R' && a != 'r');
            break;
        }

case 5:
{
    do
    {
        printf("Lista de marcas cadastradas:\n");
        for (i = 0; i < numMarcas; i++)
        {
            printf("%d. %s\n", i + 1, marcas[i].nome);
        }

        int marcaSelecionada;
        printf("Digite o número correspondente à marca para listar os produtos: ");
        scanf("%d", &marcaSelecionada);
        getchar();

        if (marcaSelecionada >= 1 && marcaSelecionada <= numMarcas)
        {
            Marca marca = marcas[marcaSelecionada - 1];

            printf("====================================================================================================================\n");
            printf("\t\t\t\tProdutos da marca %s\n", marca.nome);
            printf("====================================================================================================================\n");
            printf("Descricao | peso | valor de compra | valor de venda | valor de lucro | percentual de lucro |  Marca\n");
            printf("--------------------------------------------------------------------------------------------------------------------\n");

            int encontrado = 0;
            for (i = 0; i < numProdutos; i++)
            {
                if (strcmp(produtos[i].marca.nome, marca.nome) == 0)
                {
                    encontrado = 1;
                    printf("\t\t\t\tProduto %d:\n\n", i + 1);
                    printf("Descricao: %s\t", produtos[i].descricao);
                    printf("Peso: %.2f\t", produtos[i].peso);
                    printf("Valor de Compra: %.2f\t", produtos[i].valorc);
                    printf("Valor de Venda: %.2f\t", produtos[i].valorv);
                    printf("Valor do Lucro: %.2f\t", produtos[i].valorlc);
                    printf("Percentual de Lucro: %.2f%%\t", produtos[i].percentualLucro);
                    printf("Marca: %s\n\t", produtos[i].marca.nome);

                    printf("\n");
                }
            }

            if (!encontrado)
            {
                printf("Nenhum produto encontrado da marca %s.\n", marca.nome);
            }
        }
        else
        {
            printf("Número de marca inválido. Digite um número válido.\n");
        }

        printf("Digite R para voltar para o menu principal:\n");
        scanf(" %c", &a);
        getchar();

    } while (a != 'R' && a != 'r');
    break;
}
        case 6:
        {
            do
            {
                float maiorValor = 0;
                char estados[MAX_UF][3];
                int numEstados = 0;

                for (i = 0; i < numProdutos; i++)
                {
                    if (produtos[i].valorv > maiorValor)
                    {
                        maiorValor = produtos[i].valorv;
                        strcpy(estados[0], produtos[i].marca.uf);
                        numEstados = 1;
                    }
                    else if (produtos[i].valorv == maiorValor)
                    {
                        bool estadoJaExistente = false;
                        for (j = 0; j < numEstados; j++)
                        {
                            if (strcmp(produtos[i].marca.uf, estados[j]) == 0)
                            {
                                estadoJaExistente = true;
                                break;
                            }
                        }
                        if (!estadoJaExistente)
                        {
                            strcpy(estados[numEstados], produtos[i].marca.uf);
                            numEstados++;
                        }
                    }
                }

                printf("====================================================================================================================\n");
                printf("\t\t\t\tEstado(s) com o produto mais caro\n");
                printf("====================================================================================================================\n");

                for (i = 0; i < numEstados; i++)
                {
                    printf("%s\n", estados[i]);
                }

                printf("Digite R para voltar para o menu principal:\n");
                scanf(" %c", &a);
                getchar();

            } while (a != 'R' && a != 'r');
            break;
        }

        case 7:
        {
            do
            {
                float menorValor = produtos[0].valorv;
                char marcas[MAX_NOME][MAX_NOME];
                int numMarcasEncontradas = 0;

                for (i = 0; i < numProdutos; i++)
                {
                    if (produtos[i].valorv < menorValor)
                    {
                        menorValor = produtos[i].valorv;
                        strcpy(marcas[0], produtos[i].marca.nome);
                        numMarcasEncontradas = 1;
                    }
                    else if (produtos[i].valorv == menorValor)
                    {
                        bool marcaJaExistente = false;
                        for (j = 0; j < numMarcasEncontradas; j++)
                        {
                            if (strcmp(produtos[i].marca.nome, marcas[j]) == 0)
                            {
                                marcaJaExistente = true;
                                break;
                            }
                        }
                        if (!marcaJaExistente)
                        {
                            strcpy(marcas[numMarcasEncontradas], produtos[i].marca.nome);
                            numMarcasEncontradas++;
                        }
                    }
                }

                printf("====================================================================================================================\n");
                printf("\t\t\t\tMarca(s) com o produto mais barato\n");
                printf("====================================================================================================================\n");

                for (i = 0; i < numMarcasEncontradas; i++)
                {
                    printf("%s\n", marcas[i]);
                }

                printf("Digite R para voltar para o menu principal:\n");
                scanf(" %c", &a);
                getchar();

            } while (a != 'R' && a != 'r');
            break;
        }

case 8:
{
    int i, j;

    for (i = 0; i < numProdutos - 1; i++)
    {
        for (j = 0; j < numProdutos - i - 1; j++)
        {
            if (produtos[j].valorv > produtos[j + 1].valorv)
            {
                Produto temp = produtos[j];
                produtos[j] = produtos[j + 1];
                produtos[j + 1] = temp;
            }
        }
    }

    printf("====================================================================================================================\n");
    printf("\t\t\t\tProdutos em ordem crescente de valor\n");
    printf("====================================================================================================================\n");
    printf("Descricao | peso | valor de compra | valor de venda | valor de lucro | percentual de lucro |  Marca\n");
    printf("--------------------------------------------------------------------------------------------------------------------\n");

    for (i = 0; i < numProdutos; i++)
    {
        printf("\t\t\t\tProduto %d:\n\n", i + 1);
        printf("Descricao: %s\t", produtos[i].descricao);
        printf("Peso: %.2f\t", produtos[i].peso);
        printf("Valor de Compra: %.2f\t", produtos[i].valorc);
        printf("Valor de Venda: %.2f\t", produtos[i].valorv);
        printf("Valor do Lucro: %.2f\t", produtos[i].valorlc);
        printf("Percentual de Lucro: %.2f%%\t", produtos[i].percentualLucro);
        printf("Marca: %s\n\t", produtos[i].marca.nome);

        printf("\n");
    }

    printf("Digite R para voltar para o menu principal:\n");
    scanf(" %c", &a);
    getchar();

    break;
}

        case 9:
        {
            do
            {
                for (i = 0; i < numProdutos - 1; i++)
                {
                    for (j = 0; j < numProdutos - i - 1; j++)
                    {
                        if (produtos[j].valorlc > produtos[j + 1].valorlc)
                        {
                            Produto temp = produtos[j];
                            produtos[j] = produtos[j + 1];
                            produtos[j + 1] = temp;
                        }
                    }
                }

                printf("====================================================================================================================\n");
                printf("\t\t\t\tProdutos em ordem crescente de maior 'valor do lucro'\n");
                printf("====================================================================================================================\n");
                printf("Descricao | peso | valor de compra | valor de venda | valor de lucro | percentual de lucro |  Marca\n");
                printf("--------------------------------------------------------------------------------------------------------------------\n");

                for (i = 0; i < numProdutos; i++)
                {
                    printf("\t\t\t\tProduto %d:\n\n", i + 1);
                    printf("Descricao: %s\t", produtos[i].descricao);
                    printf("Peso: %.2f\t", produtos[i].peso);
                    printf("Valor de Compra: %.2f\t", produtos[i].valorc);
                    printf("Valor de Venda: %.2f\t", produtos[i].valorv);
                    printf("Valor do Lucro: %.2f\t", produtos[i].valorlc);
                    printf("Percentual de Lucro: %.2f%%\t", produtos[i].percentualLucro);
                    printf("Marca: %s\n\t", produtos[i].marca.nome);

                    printf("\n");
                }

                printf("Digite R para voltar para o menu principal:\n");
                scanf(" %c", &a);
                getchar();

            } while (a != 'R' && a != 'r');
            break;
        }

        case 10:
        {
            do
            {
                for (i = 0; i < numProdutos - 1; i++)
                {
                    for (j = 0; j < numProdutos - i - 1; j++)
                    {
                        if (produtos[j].percentualLucro > produtos[j + 1].percentualLucro)
                        {
                            Produto temp = produtos[j];
                            produtos[j] = produtos[j + 1];
                            produtos[j + 1] = temp;
                        }
                    }
                }

                printf("====================================================================================================================\n");
                printf("\t\t\t\tProdutos em ordem crescente de maior 'percentual de lucro'\n");
                printf("====================================================================================================================\n");
                printf("Descricao | peso | valor de compra | valor de venda | valor de lucro | percentual de lucro |  Marca\n");
                printf("--------------------------------------------------------------------------------------------------------------------\n");

                for (i = 0; i < numProdutos; i++)
                {
                    printf("\t\t\t\tProduto %d:\n\n", i + 1);
                    printf("Descricao: %s\t", produtos[i].descricao);
                    printf("Peso: %.2f\t", produtos[i].peso);
                    printf("Valor de Compra: %.2f\t", produtos[i].valorc);
                    printf("Valor de Venda: %.2f\t", produtos[i].valorv);
                    printf("Valor do Lucro: %.2f\t", produtos[i].valorlc);
                    printf("Percentual de Lucro: %.2f%%\t", produtos[i].percentualLucro);
                    printf("Marca: %s\n\t", produtos[i].marca.nome);

                    printf("\n");
                }

                printf("Digite R para voltar para o menu principal:\n");
                scanf(" %c", &a);
                getchar();

            } while (a != 'R' && a != 'r');
            break;
        }

        case 11:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida. Digite uma opcao valida.\n");
            break;
        }

    } while (op != 11);

    free(marcas);
    free(produtos);

    return 0;
}
