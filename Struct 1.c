#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct pessoa
{

    char nome[250];
    int idade, peso, altura;
};

int main()
{

    setlocale (LC_ALL, "Portuguese");

    int i;

    struct pessoa cadastro[3];

    for (i = 0; i < 3; i++)
    {

        printf("\nFaça o %dº cadastro \n\n",i+1);
        printf("Nome:",i+1);
        scanf("%s", &cadastro[i].nome);

        printf("Idade:");
        scanf("%d", &cadastro[i].idade);

        printf("Peso:");
        scanf("%d", &cadastro[i].peso);

        printf("Altura:");
        scanf("%d", &cadastro[i].altura);

    }
    system ("cls");

    

    for ( i = 0; i < 3; i++)
    {
        printf ("\nCadastro %dº\n\n", i+1);
        printf ("Nome: %s \n", cadastro[i].nome);
        printf ("Idade: %d \n", cadastro[i].idade);
        printf ("Peso: %d \n", cadastro[i].peso);
        printf ("Altura: %d \n", cadastro[i].altura);

    }
    

    return 0;
}