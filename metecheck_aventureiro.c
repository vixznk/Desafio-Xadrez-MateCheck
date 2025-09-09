#include <stdio.h>

// O cavalo deve se movimentar em L: 2 para baixo e 1 para esquerda
// Uso obrigatório de loops aninhados: for + while

int main() {
    printf("Movimentação do Cavalo (em L: baixo + esquerda):\n");

    // Loop externo: for para baixo (2 passos)
    for(int baixo = 1; baixo <= 2; baixo++) {
        // Loop interno: while para esquerda (1 passo)
        int esquerda = 1;
        while(esquerda <= 1) {
            printf("Passo %d: Baixo\n", baixo);
            printf("Passo %d: Esquerda\n", baixo);
            esquerda++;
        }
    }
    printf("\n");
    return 0;
}