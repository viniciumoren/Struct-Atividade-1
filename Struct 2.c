#include <stdio.h>
#include <locale.h>
#include <stdlib.h.>
#include <time.h>

// ? Implemente um programa que leia o NOME, a IDADE e o ENDERE�O de
// UMA pessoa e armazene os dados em uma estrutura.
// ? MOSTRE os dados do usu�rio.

struct cadastro
{
    char nome[250];
    char endereco[250];
    int idade;
};

int main()
{

    setlocale (LC_ALL, "Portuguese");

    struct cadastro cadastro[3];

    int i;
    for (i = 0; i < 3; i++)
    {
        
       
        
        printf("Cadastro %d�\n\n", i + 1);

        printf("Nome:");
        scanf("%s", &cadastro[i].nome);

        fflush (stdin); 

        printf("Idade:");
        scanf("%d", &cadastro[i].idade);

        

        printf("Endere�o:");
        scanf("%s", &cadastro[i].endereco);

        fflush (stdin); 

        system("cls");
    }

    for (i = 0; i < 3; i++)
    {
        printf("\nCadastro %d�\n\n", i + 1);

        printf("Nome: %s\n", cadastro[i].nome);
        printf("Idade: %d\n", cadastro[i].idade);
        printf("Endere�o: %s \n\n", cadastro[i].endereco);

    }
}