#include <stdio.h>

int main() {
    // Movimento da TORRE - 5 casas para a direita (estrutura: for)
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do BISPO - 5 casas na diagonal para cima e à direita (estrutura: while)
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // Movimento da RAINHA - 8 casas para a esquerda (estrutura: do-while)
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);

    return 0;
}
