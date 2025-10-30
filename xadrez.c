#include <stdio.h>

// Constantes que definem o número de casas que cada peça se move
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    // ==============================
    // Desafio MateCheck - Nível Novato
    // ==============================
    // Teste de estruturas de repetição com movimentação das peças de xadrez
    // Autor: Leonardo
    // ==============================

    // Movimentação do Bispo (diagonal superior direita)
    printf("=== Movimentação do BISPO ===\n");
    for (int i = 1; i <= BISPO_MOV; i++) {
        // O Bispo se move combinando duas direções
        printf("Casa %d: ", i);
        printf("Cima + Direita\n");
    }
    printf("\n");

    // Movimentação da Torre (para a direita)
    printf("=== Movimentação da TORRE ===\n");
    int j = 1;
    while (j <= TORRE_MOV) {
        printf("Casa %d: Direita\n", j);
        j++;
    }
    printf("\n");

    // Movimentação da Rainha (para a esquerda)
    printf("=== Movimentação da RAINHA ===\n");
    int k = 1;
    do {
        printf("Casa %d: Esquerda\n", k);
        k++;
    } while (k <= RAINHA_MOV);
    printf("\n");

    // Fim do programa
    printf("=== Fim do Desafio Nível Novato - MateCheck ===\n");
    return 0;
}
