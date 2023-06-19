#include <stdio.h>
#include <locale.h>
#include <stdlib.h.>
#include <time.h>

// Crie uma estrutura representando os alunos de um determinado
// curso. A estrutura deve conter a matrícula do aluno, nome, nota da
// primeira prova, nota da segunda prova e nota da terceira prova.

//(a) Permita ao usuário entrar com os dados de 5 alunos;
//(b) Informe a maior nota da primeira prova;
//(c) Informe a maior media geral;
//(d) Informe a menor media geral;
//(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o
// valor 6 para aprovação.

struct cursoLogica
{
    int numeroMatriculaAluno;
    char nome[250];
    float nota[2];
};

int main()
{

    setlocale(LC_ALL, "Portuguese");

    struct cursoLogica aluno[5];

    int i, j;
    float soma = 0;
    float media[5];
    float maiorNota;
    float maiorMedia;
    float menorMedia = 9999;

    for (i = 0; i < 5; i++)
    {

        system("cls");

        printf("\nCADASTRO Nª%d\n\n Digite as seguinte informações. \n", i + 1);
        printf("\nNúmero da Matricula:", i + 1);
        scanf("%d", &aluno[i].numeroMatriculaAluno);

        fflush(stdin);

        printf("Nome:");
        scanf("%s", &aluno[i].nome);

        fflush(stdin);

        for (j = 0; j < 2; j++)
        {
            printf("Nota º%d:", j + 1);
            scanf("%f", &aluno[i].nota[j]);

            fflush(stdin);

            soma += aluno[i].nota[j];

            if (aluno[i].nota[j] > maiorNota)
            {
                maiorNota = aluno[i].nota[j];
            }

            fflush(stdin);
        }
        media[i] = soma / j;
        if (media[i] > maiorMedia)
        {
            maiorMedia = media[i];
        }

        else if (media[i] < menorMedia)
        {
            menorMedia = media[i];
        }

        soma = 0;
        fflush(stdin);
    }
    
    printf("\n\nInformações sobre notas:\n");
    printf("Maior nota: %.1f \n", maiorNota);
    printf("Maior média: %.1f \n", maiorMedia);
    printf("Menor média: %.1f \n\n\n", menorMedia);

    for (i = 0; i < 5; i++)
    {
        printf("Aluno: %s \n", aluno[i].nome);
        printf("Média: %.1f ", media[i]);
        if (media[i] >= 6)
        {
            printf("Aprovado\n\n");
        }
        else
        {
            printf("Reprovado \n\n");
        }
    }

    system("pause");
    return 0;
}