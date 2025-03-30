#include <stdio.h>

// Função recursiva para mover o bispo (5 casas na diagonal superior direita)
void moverBispo(int x, int y, int passos) {
    if (passos == 0) return;
    x += 1;
    y += 1;
    printf("Bispo moveu para (%d, %d)\n", x, y);
    moverBispo(x, y, passos - 1);
}

// Função recursiva para mover a torre (5 casas para a direita)
void moverTorre(int x, int passos) {
    if (passos == 0) return;
    x += 1;
    printf("Torre moveu para (%d)\n", x);
    moverTorre(x, passos - 1);
}

// Função recursiva para mover a rainha (8 casas para a esquerda)
void moverRainha(int x, int passos) {
    if (passos == 0) return;
    x -= 1;
    printf("Rainha moveu para (%d)\n", x);
    moverRainha(x, passos - 1);
}

// Movimento do cavalo (1 vez em L para cima e à direita)
void moverCavalo(int x, int y) {
    for (int i = 0, j = 0; i < 2 || j < 1; i++, j++) {
        if (i < 2) {
            y += 1;
            printf("Cavalo moveu para cima: (%d, %d)\n", x, y);
        }
        if (j < 1) {
            x += 2;
            printf("Cavalo moveu para direita: (%d, %d)\n", x, y);
        }
        if (x > 8 || y > 8) {
            printf("Movimento inválido, encerrando.\n");
            break;
        }
    }
}

int main() {
    printf("Movimentação das Peças:\n");
    moverBispo(4, 4, 5);
    moverTorre(4, 5);
    moverRainha(8, 8);
    moverCavalo(4, 4);
    return 0;
}
