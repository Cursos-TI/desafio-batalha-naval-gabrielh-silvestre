#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Implementação dos três níveis: Novato, Aventureiro e Mestre

int main() {
    // -------------------- Nível Novato --------------------
    // Tabuleiro 5x5 para o nível novato
    int tabuleiroNovato[5][5] = {0};

    // Posiciona navio vertical (coluna 1, linhas 1 a 3)
    for (int i = 1; i <= 3; i++) {
        tabuleiroNovato[i][1] = 3;
    }
    // Posiciona navio horizontal (linha 3, colunas 2 a 4)
    for (int j = 2; j <= 4; j++) {
        tabuleiroNovato[3][j] = 3;
    }

    printf("=== Nível Novato ===\n");
    printf("Coordenadas do navio vertical:\n");
    for (int i = 1; i <= 3; i++) {
        printf("(%d, %d)\n", i, 1);
    }
    printf("Coordenadas do navio horizontal:\n");
    for (int j = 2; j <= 4; j++) {
        printf("(%d, %d)\n", 3, j);
    }

    // -------------------- Nível Aventureiro --------------------
    // Tabuleiro 10x10 para o nível aventureiro
    int tabuleiroAventureiro[10][10] = {0};

    // Navio 1: vertical (coluna 2, linhas 1 a 4)
    for (int i = 1; i <= 4; i++) {
        tabuleiroAventureiro[i][2] = 3;
    }
    // Navio 2: horizontal (linha 6, colunas 5 a 8)
    for (int j = 5; j <= 8; j++) {
        tabuleiroAventureiro[6][j] = 3;
    }
    // Navio 3: diagonal principal (de (0,0) a (3,3))
    for (int k = 0; k < 4; k++) {
        tabuleiroAventureiro[k][k] = 3;
    }
    // Navio 4: diagonal secundária (de (0,9) a (3,6))
    for (int k = 0; k < 4; k++) {
        tabuleiroAventureiro[k][9 - k] = 3;
    }

    printf("\n=== Nível Aventureiro ===\n");
    printf("Tabuleiro 10x10 (0 = vazio, 3 = navio):\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiroAventureiro[i][j]);
        }
        printf("\n");
    }

    // -------------------- Nível Mestre --------------------
    // Matrizes para habilidades especiais (cone, cruz, octaedro)
    // Todas são 5x5 para facilitar visualização

    // Habilidade: Cone
    int cone[5][5] = {0};
    // Preenche o padrão de cone
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) ||
                (i == 1 && (j >= 1 && j <= 3)) ||
                (i == 2)) {
                cone[i][j] = 1;
            }
        }
    }

    // Habilidade: Octaedro
    int octaedro[5][5] = {0};
    // Preenche o padrão de octaedro
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) ||
                (i == 1 && (j >= 1 && j <= 3)) ||
                (i == 2 && j == 2)) {
                octaedro[i][j] = 1;
            }
        }
    }

    // Habilidade: Cruz
    int cruz[5][5] = {0};
    // Preenche o padrão de cruz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            if ((i == 0 && j == 2) ||
                (i == 1) ||
                (i == 2 && j == 2)) {
                cruz[i][j] = 1;
            }
        }
    }

    // Exibe as matrizes das habilidades
    printf("\n=== Nível Mestre ===\n");
    printf("Habilidade: Cone\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cone[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade: Octaedro\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", octaedro[i][j]);
        }
        printf("\n");
    }

    printf("\nHabilidade: Cruz\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", cruz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
