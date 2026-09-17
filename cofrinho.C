#include <stdio.h>

int main() {
    int opcao;
    float total = 0.0;

    printf("--- COFRINHO DIGITAL ---\n");

    do {
        printf("\nSaldo atual: R$ %.2f\n", total);
        printf("Escolha uma moeda para adicionar:\n");
        printf("1 - Adicionar R$ 0,50\n");
        printf("2 - Adicionar R$ 1,00\n");
        printf("3 - Adicionar R$ 2,00\n");
        printf("0 - Parar e ver o total acumulado\n");
        printf("Opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                total += 0.50;
                printf("Moeda de R$ 0,50 adicionada!\n");
                break;
            case 2:
                total += 1.00;
                printf("Moeda de R$ 1,00 adicionada!\n");
                break;
            case 3:
                total += 2.00;
                printf("Moeda de R$ 2,00 adicionada!\n");
                break;
            case 0:
                printf("\nEncerrando o cofrinho...\n");
                break;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    } while(opcao != 0);
    printf("Total acumulado no cofrinho: R$ %.2f\n", total);

    return 0;
}
