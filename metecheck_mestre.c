#include <stdio.h>

// Constantes para movimentação
#define CASAS_BISPO 5
#define CASAS_TORRE 5
#define CASAS_RAINHA 8

// Bispo: recursivo + aninhamento
void mover_bispo(int casas) {
    if(casas == 0) return;
    printf("Movimento %d: Cima\n", CASAS_BISPO-casas+1);
    printf("Movimento %d: Direita\n", CASAS_BISPO-casas+1);
    mover_bispo(casas - 1);
}

// Torre: recursivo
void mover_torre(int casas) {
    if(casas == 0) return;
    printf("Movimento %d: Direita\n", CASAS_TORRE-casas+1);
    mover_torre(casas - 1);
}

// Rainha: recursivo
void mover_rainha(int casas) {
    if(casas == 0) return;
    printf("Movimento %d: Esquerda\n", CASAS_RAINHA-casas+1);
    mover_rainha(casas - 1);
}

// Cavalo: L para cima à direita, loops aninhados, múltiplas variáveis, continue e break
void mover_cavalo() {
    printf("Movimentação do Cavalo (em L: cima + direita, 1 vez):\n");
    int cima, direita;
    for(cima = 1, direita = 0; cima <= 2; cima++) {
        for(direita = 1; direita <= 2; direita++) {
            // Cavalo move em L: 2 cima e 1 direita OU 1 cima e 2 direita
            if(!((cima == 2 && direita == 1) || (cima == 1 && direita == 2))) {
                continue;
            }
            printf("Movimento L:\n");
            for(int i = 0; i < cima; i++) printf("Cima\n");
            for(int j = 0; j < direita; j++) printf("Direita\n");
            break; // Executa apenas uma vez
        }
        break;
    }
    printf("\n");
}

int main() {
    printf("Movimentação do Bispo (Recursivo):\n");
    mover_bispo(CASAS_BISPO);
    printf("\n");

    printf("Movimentação da Torre (Recursivo):\n");
    mover_torre(CASAS_TORRE);
    printf("\n");

    printf("Movimentação da Rainha (Recursivo):\n");
    mover_rainha(CASAS_RAINHA);
    printf("\n");

    mover_cavalo();

    return 0;
}