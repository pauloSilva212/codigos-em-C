#include <stdio.h>

int main() {
    float nota, soma = 0, media_geral;

    printf("--- SISTEMA DE NOTAS DE ATENDIMENTO ---\n\n");

    for(int i = 1; i <= 10; i++) {
        printf("Digite a nota do cliente %d (de 0 a 10): ", i);
        scanf("%f", &nota);

        while(nota < 0 || nota > 10) {
            printf("Nota inválida! Digite novamente a nota do cliente %d (0 a 10): ", i);
            scanf("%f", &nota);
        }

        soma += nota; 
    }
    
    media_geral = soma / 10;

    printf("Média geral do atendimento: %.2f\n", media_geral);
    if(media_geral < 7.0) {
        printf("[ALERTA] Atenção! A média de atendimento está abaixo do esperado (menor que 7).\n");
    } else {
        printf("Parabéns! A média de atendimento está boa (7 ou superior).\n");
    }

    return 0;
}
