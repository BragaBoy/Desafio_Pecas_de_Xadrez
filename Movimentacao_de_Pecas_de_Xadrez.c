#include <stdio.h>

// Função recursiva para mover a TORRE para a direita
void moverTorre(int passosRestantes) {
    if (passosRestantes == 0) return;
    printf("Direita\n");
    moverTorre(passosRestantes - 1);
}

// Função recursiva para mover a RAINHA para a esquerda
void moverRainha(int passosRestantes) {
    if (passosRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(passosRestantes - 1);
}

// Função recursiva para o BISPO com chamada mista: imprime e usa laços
void moverBispoRecursivo(int passosRestantes) {
    if (passosRestantes == 0) return;

    // Loops aninhados: o externo representa o movimento vertical (cima)
    // o interno representa o movimento horizontal (direita)
    for (int i = 0; i < 1; i++) { // sempre 1 "Cima"
        for (int j = 0; j < 1; j++) { // sempre 1 "Direita"
            printf("Cima Direita\n");
        }
    }

    moverBispoRecursivo(passosRestantes - 1);
}

// Função principal
int main() {
    // ---------------- TORRE ----------------
    int casasTorre = 5;
    printf("Movimento da Torre (5 casas para a direita):\n");
    moverTorre(casasTorre);
    printf("\n");

    // ---------------- BISPO ----------------
    int casasBispo = 5;
    printf("Movimento do Bispo (5 casas na diagonal para cima e à direita):\n");
    moverBispoRecursivo(casasBispo);
    printf("\n");

    // ---------------- RAINHA ----------------
    int casasRainha = 8;
    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    moverRainha(casasRainha);
    printf("\n");

    // ---------------- CAVALO ----------------
    // Movimento do Cavalo: 2 casas para cima e 1 para a direita (em "L")
    // Usando loops aninhados e controle de fluxo
    printf("Movimento do Cavalo (2 casas para cima e 1 para a direita):\n");

    int movCima = 2;
    int movDireita = 1;

    for (int i = 0; i < 3; i++) {  // Simula 3 movimentos em L
        int casasSubidas = 0;
        int casasDireita = 0;

        // Movimento vertical (duas casas para cima)
        for (int j = 0; j < movCima; j++) {
            if (j == 1) continue; // Exemplo de controle: ignora a segunda subida (teste)
            printf("Cima\n");
            casasSubidas++;
        }

        // Movimento horizontal (uma casa para a direita)
        int k = 0;
        while (k < movDireita) {
            if (casasSubidas < 1) break; // só permite se houve movimento vertical
            printf("Direita\n");
            casasDireita++;
            k++;
        }

        printf("--- Fim do movimento em L #%d ---\n", i + 1);
    }

    return 0;
}
