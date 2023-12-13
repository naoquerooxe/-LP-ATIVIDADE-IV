#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ContaBancaria {
    int numeroConta;
    char nomeTitular[50];
    float saldo;
    char tipoConta[20];
};


void depositar(struct ContaBancaria *conta, float valor) {
    conta->saldo += valor;
    printf("Depositado %.2f com sucesso.\n", valor);
}


void sacar(struct ContaBancaria *conta, float valor) {
    if (valor <= conta->saldo) {
        conta->saldo -= valor;
        printf("Sacado %.2f com sucesso.\n", valor);
    } else {
        printf("Saldo insuficiente para saque.\n");
    }
}


void imprimirSaldo(struct ContaBancaria conta) {
    printf("Saldo atual: %.2f\n", conta.saldo);
}

int main() {
    struct ContaBancaria minhaConta = {12345, "Maria", 1000.0, "Corrente"};
    int opcao;
    float valor;

    do {
        
        printf("\n");
        printf("-----MENU-----\n");
        printf("1. Depositar\n");
        printf("2. Sacar\n");
        printf("3. Ver saldo\n");
        printf("0. Sair\n");
        printf("\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
         printf("\n");

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser depositado: ");
                scanf("%f", &valor);
                depositar(&minhaConta, valor);
                break;
            case 2:
                printf("Digite o valor a ser sacado: ");
                scanf("%f", &valor);
                sacar(&minhaConta, valor);
                break;
            case 3:
                imprimirSaldo(minhaConta);
                break;
            case 0:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (opcao != 0);

    return 0;
}
