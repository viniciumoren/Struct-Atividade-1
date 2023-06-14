#include <stdio.h>
#include <locale.h>
#include <stdlib.h.>
#include <time.h>

// ? Implemente um programa que leia as informações de um livro com
// ? Nome
// ? Autor
// ? Categoria
// ? Preço
// Armazene os dados em uma estrutura com vetor para 3 livros.
// Mostre os dados do livro.

struct informacoesLivro
{
    char nome[250];
    char autor[250];
    char categoria[250];
    float preco;
};

int main()
{

    setlocale(LC_ALL, "Portuguese");

    struct informacoesLivro livro[3];

    int i;
    for (i = 0; i < 3; i++)
    {

        printf("Livro %dº\n\n", i + 1);

        printf("Titulo:");
        scanf("%s", &livro[i].nome);

        fflush(stdin);

        printf("Autor:");
        scanf("%s", &livro[i].autor);

        fflush(stdin);

        printf("Categoria:");
        scanf("%s", &livro[i].categoria);

        fflush(stdin);

        printf("Preço:");
        scanf("%f", &livro[i].preco);

        fflush(stdin);

        system("cls");
    }

    for (i = 0; i < 3; i++)
    {
        printf("\nCadastro %dº\n\n", i + 1);

        printf("Nome: %s\n", livro[i].nome);
        printf("Autor: %s\n", livro[i].autor);
        printf("Endereço: %s \n", livro[i].categoria);
        printf("Preço: R$ %.2f \n\n", livro[i].preco);
    }
}