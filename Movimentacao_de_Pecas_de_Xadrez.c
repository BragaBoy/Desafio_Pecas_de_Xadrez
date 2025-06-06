#include <stdio.h>

int main() {
    // ---------------- TORRE ----------------
    // Movimento da TORRE - 5 casas para a direita (estrutura: for)
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // ---------------- BISPO ----------------
    // Movimento do BISPO - 5 casas na diagonal para cima e à direita (estrutura: while)
    int casasBispo = 5;
    int contadorBispo = 1;
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    while (contadorBispo <= casasBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }
    printf("\n");

    // ---------------- RAINHA ----------------
    // Movimento da RAINHA - 8 casas para a esquerda (estrutura: do-while)
    int casasRainha = 8;
    int contadorRainha = 1;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= casasRainha);
    printf("\n");

    // ---------------- CAVALO ----------------
    // Movimento do CAVALO - 2 casas para baixo e 1 para a esquerda (em "L")
    // Usando loops aninhados: for (externo) + while (interno)
    int passosBaixo = 2;
    int passosEsquerda = 1;

    printf("Movimento do Cavalo (2 casas para baixo e 1 para a esquerda):\n");

    // Loop externo com for para as casas para baixo
    for (int i = 0; i < passosBaixo; i++) {
        printf("Baixo\n");
        
        // Poderia haver lógica adicional por casa aqui, se necessário
    }

    // Loop interno com while para a casa à esquerda
    int j = 0;
    while (j < passosEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
