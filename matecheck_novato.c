#include <stdio.h>

// Constantes para movimentação
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

int main() {
    // Bispo: 5 casas na diagonal superior direita (usa for)
    printf("Movimentação do Bispo (5 casas na diagonal superior direita):\n");
    for(int i = 1; i <= CASAS_BISPO; i++) {
        printf("Movimento %d: Cima\n", i);
        printf("Movimento %d: Direita\n", i);
    }
    printf("\n");

    // Torre: 5 casas para a direita (usa while)
    printf("Movimentação da Torre (5 casas para a direita):\n");
    int j = 1;
    while(j <= CASAS_TORRE) {
        printf("Movimento %d: Direita\n", j);
        j++;
    }
    printf("\n");

    // Rainha: 8 casas para a esquerda (usa do-while)
    printf("Movimentação da Rainha (8 casas para a esquerda):\n");
    int k = 1;
    do {
        printf("Movimento %d: Esquerda\n", k);
        k++;
    } while(k <= CASAS_RAINHA);
    printf("\n");

    return 0;
}