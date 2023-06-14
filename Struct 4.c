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

struct curso
{
    char aluno[250];
    char nome[250];
    float nota;
};

int main()
{

    struct curso matricula[5];

    int i;

    for ( i = 0; i < 5; i++)
    {
        printf ("Digite seu curso.")
    }
        

}