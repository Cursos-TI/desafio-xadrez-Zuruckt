#include <stdio.h>

#define STEPS 3

void moveRook(int steps, const char *direction) {
    if(steps <= 0)
        return;
    printf("%s\n", direction);
    moveRook(steps - 1, direction);
}

void moveQueen(int steps, const char *direction) {
    if(steps <= 0)
        return;
    printf("%s\n", direction);
    moveQueen(steps - 1, direction);
}

void moveBishopRecursive(int steps, int current) {
    if(current >= steps)
        return;
    printf("Cima\n");
    printf("Direita\n");
    moveBishopRecursive(steps, current + 1);
}

void moveBishopNestedLoops(int steps) {
    for (int i = 0; i < steps; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

void moveKnight() {
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            if(j == 0) {
                printf("Cima\n");
            } else {
                if(i == 1) {
                    printf("Direita\n");
                }
                break;
            }
        }
    }
}

int main() {
    printf("Movimento da Torre:\n");
    moveRook(STEPS, "Cima");
    moveRook(STEPS, "Baixo");
    moveRook(STEPS, "Esquerda");
    moveRook(STEPS, "Direita");
    printf("\n");

    printf("Movimento da Rainha:\n");
    moveQueen(STEPS, "Cima");
    moveQueen(STEPS, "Baixo");
    moveQueen(STEPS, "Esquerda");
    moveQueen(STEPS, "Direita");
    printf("\n");

    printf("Movimento do Bispo (Recursivo):\n");
    moveBishopRecursive(STEPS, 0);
    printf("\n");

    printf("Movimento do Bispo (Loops Aninhados):\n");
    moveBishopNestedLoops(STEPS);
    printf("\n");

    printf("Movimento do Cavalo:\n");
    moveKnight();
    printf("\n");

    return 0;
}
