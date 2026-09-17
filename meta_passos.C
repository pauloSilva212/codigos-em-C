#include <stdio.h>

int main() {
    int passos_hora;
    int total_passos = 0;
    int horas = 0;

    printf("MONITOR DE PASSOS DIÁRIOS \n\n");
    while (total_passos < 10000) {
        horas++;
        
        printf("Digite a quantidade de passos dados na hora %d: ", horas);
        scanf("%d", &passos_hora);
        
        total_passos += passos_hora;
        printf("Total acumulado: %d passos\n\n", total_passos);
    }

    printf("Parabéns! Meta de 10.000 passos atingida!\n");
    printf("Total final: %d passos.\n", total_passos);
    printf("Tempo necessário: %d horas.\n", horas);

    return 0;
}
