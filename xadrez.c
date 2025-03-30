#include <stdio.h>

#define MOV_CAVALO_LINHAS 2 // Movimento para baixo
#define MOV_CAVALO_COLUNAS 1 // Movimento para a esquerda

void moverCavalo() {
    printf("Movimentação do Cavalo em L:\n");
    
    // Estrutura de repetição 'for' para o movimento na vertical (para baixo)
    for (int i = 0; i < MOV_CAVALO_LINHAS; i++) {
        printf("Baixo\n");
    }
    
    // Estrutura de repetição 'while' para o movimento na horizontal (para a esquerda)
    int j = 0;
    while (j < MOV_CAVALO_COLUNAS) {
        printf("Esquerda\n");
        j++;
    }
}

int main() {
    moverCavalo();
    return 0;
}
