#include <stdio.h>

// Definição de constantes para o número de movimentos de cada peça
#define MOV_BISPO 5
#define MOV_TORRE 5
#define MOV_RAINHA 8

void moverBispo() {
    printf("\nMovimentos do Bispo (diagonal superior direita):\n");
    for (int i = 1; i <= MOV_BISPO; i++) {
        printf("Movendo %d casa(s) para a diagonal superior direita.\n", i);
    }
}

void moverTorre() {
    printf("\nMovimentos da Torre (para a direita):\n");
    for (int i = 1; i <= MOV_TORRE; i++) {
        printf("Movendo %d casa(s) para a direita.\n", i);
    }
}

void moverRainha() {
    printf("\nMovimentos da Rainha (para a esquerda):\n");
    for (int i = 1; i <= MOV_RAINHA; i++) {
        printf("Movendo %d casa(s) para a esquerda.\n", i);
    }
}

int main() {
    printf("Simulacao de Movimentacao das Pecas de Xadrez\n");
    moverBispo();
    moverTorre();
    moverRainha();
    printf("\nFim da simulacao.\n");
    return 0;
}
