#include <stdio.h>

int main() {
    float consumo[5];
    float soma = 0, media_geral;
    
    for(int i = 0; i < 5; i++) {
        printf("Digite o consumo mensal do morador %d (em m³): ", i + 1);
        scanf("%f", &consumo[i]);
        soma += consumo[i]; 
    }
    
    printf("\n--- Relatório de Consumo ---\n");
    for(int i = 0; i < 5; i++) {
        if(consumo[i] <= 20) {
            printf("Morador %d: %.2fm³ -> Dentro da média\n", i + 1, consumo[i]);
        } else {
            printf("Morador %d: %.2fm³ -> Acima da média\n", i + 1, consumo[i]);
        }
    }
    
    media_geral = soma / 5;
    printf("\nConsumo médio geral do condomínio: %.2fm³\n", media_geral);
    
    return 0;
}
