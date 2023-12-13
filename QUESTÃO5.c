#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 100

struct dados_funcionarios
{
    char nome[200], cargo[200];
    float salario;
};

float media(struct dados_funcionarios funcionario[])
{
    int i;
    int j;
    float soma;
    float resultado;

    for (j = 0; j < TAM; j++)
    {
        if (strcmp(funcionario[i].cargo, "Programador") == 0)
        {
            j++;
            soma += funcionario[i].salario;
        }
    }
    resultado = soma / (float)j;
    return resultado;
}

int main()
{

    int opcao;
    int i;

    struct dados_funcionarios funcionarios[TAM];

    setlocale(LC_ALL,"portuguese");

    do
    {

        printf("----------MENU----------\n");
        printf(" 1. Adicionar Funcionário\n");
        printf(" 2. Exibir Média Salarial\n");
        printf(" 3. Sair\n");
        printf("-------------------------\n");

        printf("\n\n");
        printf("Selecione a opção desejada: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            fflush(stdin);

            printf("Digite o nome do %dº funcionário: ", i + 1);
            gets(funcionarios[i].nome);

            printf("Digite o nome do cargo: ");
            gets(funcionarios[i].cargo);

            printf("Digite o valor do salário: ");
            scanf("%f", &funcionarios[i].salario);

         
            break;
        case 2:
            printf("Média salarial: R$ %.2f\n\n", media(funcionarios));
            break;
        case 0:
            printf("Saindo...\n");
        default:
            printf("Opção Inválida!\n");
            break;
        }

    } while (opcao != 0);

    return 0;
}