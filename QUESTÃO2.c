� //Crie uma fun��o chamada "calcularMedia" que recebe como par�metro uma struct "Aluno", esta struct ter� informa��es como: nome, data de nascimento, duas notas e m�dia e retorna a m�dia das notas. Em seguida, crie um programa que declare um array de 5 alunos e utilize a fun��o "calcularMedia" para imprimir a m�dia de cada aluno. Tamb�m crie uma fun��o para verificar se um aluno est� aprovado ou reprovado sendo necess�rio m�dia maior ou igual a 7,0 para aprova��o.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

    struct dados_aluno;
{
    char nome[200];
    int datadenascimento;
    float notaum;
    float notadois;
    float media;
};

void limpaTela()
{
    fflush(stdin);
    system("cls|| clear");
}

int i;
int j;
float media;

float CalcularMedia(float dados_aluno, float media;)
{
    
    media = (aluno.notaum + aluno.notadois) / 2;
}

void aprovadooureprovado(struct dados_aluno, float media)
{
    if(media >= 7){
        printf("Aprovado!");
    } else {
        printf("Reprovado!");
    }
}

int main()
{

    struct dados_aluno aluno[3];

    setlocale(LC_ALL, "portuguese");

    printf("\n Dados do aluno...\n");

    for (i = 0; i < 3; i++)
    {
        fflush(stdin);

        printf("\n");
        printf("Digite o nome do aluno: \n");
        gets(aluno[i].nome);

        printf("Digite a data de nascimento do aluno: \n");
        scanf("%d", &aluno[i].datadenascimento);

        printf("Digite a primeira nota do aluno: \n");
        scanf("%f", &aluno[i].notaum);

        printf("Digite a segunda nota do aluno: \n");
        scanf("%f", &aluno[i].notadois);
    }

    printf("\n");

    for (i = 0; i < 3; i++)
    {
        printf("\n");
        printf("- NOME: %s \n", aluno[i].nome);
        printf("- Data de nascimento: %d\n", aluno[i].datadenascimento);

        printf("A primeira nota do aluno: %1.f \n", aluno[i].notaum);
        printf("A segunda nota do aluno: %1.f \n", aluno[i].notadois);

        CalcularMedia(aluno[i]);
        aprovadooureprovado(aluno[i],media);
    }
    return 0;
}
