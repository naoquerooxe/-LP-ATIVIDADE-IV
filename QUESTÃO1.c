// Crie uma struct Contato para representar informações de contatos, incluindo nome, número de telefone e email. Solicite que o usuário cadastre 3 contatos. Escreva uma função que recebe um array de contatos e um nome como parâmetro, e retorna o número de telefone correspondente a esse nome. Em seguida, implemente um programa que utiliza essa função para buscar e imprimir o número de telefone de um contato específico.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

struct dados_contatos
{
    char nome[200];
    char telefone[200];
    char email[200];
};

void buscartelofonepelonome(struct dados_contatos contato[], char *contatodesejado)
{
    int i;

    for (i = 0; i < 3; i++)
    {
        if (strcmp(contato[i].nome, contatodesejado) == 0)
        {
            printf("Telefone de %s: %s \n", contato[i].nome, contato[i].telefone);
            return;
        }
    }
    printf("Contato n�o encontrado. \n");
}

int main()
{
    setlocale(LC_ALL, "portuguese");

    char contatodesejado[200];
    int i;

    struct dados_contatos contato[3];

    for (i = 0; i < 3; i++)
    {
        fflush(stdin);

        printf("\n");
        printf("Digite o nome do usuario: \n");
        gets(contato[i].nome);

        printf("Digite o telefone: \n");
        gets(contato[i].telefone);

        printf("Informe a email: \n");
        gets(contato[i].email);
    }

    printf("Digite o nome do contato que deseja buscar:");
    gets(contatodesejado);

    buscartelofonepelonome(contato, contatodesejado);

    return 0;
}