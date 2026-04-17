#include <stdio.h>

// Declaração de procedimento para 'Mover Torre' - (Recursivo)
void moverTorre(int casas) {
    if (casas == 0) return;

        printf("Direita\n");
        moverTorre(casas - 1);
    }

// Declaração de procedimento para 'Mover Rainha' - (Recursivo)
void moverRainha (int casas) {
    if (casas == 0) return;

        printf("Esquerda\n");
        moverRainha(casas - 1);
    }

// Declaração de procedimento para 'Mover Bispo' - (Recursivo + Loop Aninhado)
void moverBispo(int casas) {
    if (casas == 0) return;
    
    for (int i = 0; i < 1; i++) {
        int j = 0;
        while (j < 1) {
            printf("Cima | Direita\n");
            j++;
        }
    }
    moverBispo(casas - 1);
}

// Declaração de procedimento para 'Cavalo' - (Loop's + Break/Continue)

void moverCavalo() {
    printf("Movimento do Cavalo:\n");

    int vertical = 0;
    int horizontal = 0;

    for (int i = 0; i < 3; i++) {

        if (vertical < 2) {
            printf("Cima\n");
            vertical++;
            continue; // Força continuar no loop
        }
        if (horizontal < 1) {
            printf("Direita\n");
            horizontal++;
            break; // Encerra após completar movimento em 'L'
        }
    }
}


int main(){

    printf("\nMovimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispo(5);
    printf("\n");

    printf("Movimento Rainha:\n");
    moverRainha(8);
    printf("\n");

    moverCavalo ();

    printf("\n");
    return 0;
}