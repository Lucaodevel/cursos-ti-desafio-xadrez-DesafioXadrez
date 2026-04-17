#include <stdio.h>

int main(){

    // Declaração de variáveis
    const int movimentoTorre = 5;
    const int movimentoBispo = 5;
    const int movimentoRainha = 8;

    // Declaração de variáveis
    const int movimentoCavaloVertical = 2;   // Duas casas para baixo
    const int movimentoCavaloHorizontal = 1; // Uma casa para a esquerda
    
    // Movimentação da torre
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= movimentoTorre; i++) {
        printf("Direita\n"); // Imprime a direção do movimento
    }
    printf("\n");

    // Movimentação do Bispo
    printf("Movimento do Bispo: \n");
    int j = 1;
    while (j <= movimentoBispo) {
        printf("Cima | Direita\n");
        j++;
    }
    printf("\n");

    // Movimentação da Rainha
    printf("Movimento da Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= movimentoRainha);
        printf("\n");
        k++;

        // Movimentação do Cavalo
        printf("Movimento do Cavalo\n");
        for (int v = 1; v <= 1; v++) {
            int cont_v = 0;
            while (cont_v < movimentoCavaloVertical) {
                printf("Baixo\n");
                cont_v++;
            }
        int cont_h = 0;
        while (cont_h < movimentoCavaloHorizontal) {
            printf("Esquerda\n");
            cont_h++;
            }
        }

    printf("\n");
    return 0;
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.