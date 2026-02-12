#include <stdio.h>

// Definição de constantes para facilitar a manutenção do código
#define TAM_TABULEIRO 10
#define TAM_NAVIO 3
#define AGUA 0
#define NAVIO 3

int main() {
    // 1. Representar o Tabuleiro: Matriz 10x10 inicializada com 0 (Água)
    int tabuleiro[TAM_TABULEIRO][TAM_TABULEIRO];

    // Inicializando o tabuleiro com loops aninhados
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }

    // 2. Posicionar os Navios
    // Coordenadas iniciais (definidas diretamente no código)
    int navio1_linha = 2, navio1_coluna = 2; // Navio Horizontal
    int navio2_linha = 5, navio2_coluna = 7; // Navio Vertical

    // --- Posicionamento do Navio Horizontal ---
    // Validação: Verifica se o navio cabe na linha e não ultrapassa a borda direita
    if (navio1_coluna + TAM_NAVIO <= TAM_TABULEIRO) {
        for (int j = 0; j < TAM_NAVIO; j++) {
            tabuleiro[navio1_linha][navio1_coluna + j] = NAVIO;
        }
    } else {
        printf("Erro: Navio horizontal fora dos limites!\n");
    }

    // --- Posicionamento do Navio Vertical ---
    // Validação: Verifica se cabe na coluna e se há sobreposição
    int podePosicionarVertical = 1;
    if (navio2_linha + TAM_NAVIO <= TAM_TABULEIRO) {
        // Checa sobreposição antes de inserir
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[navio2_linha + i][navio2_coluna] == NAVIO) {
                podePosicionarVertical = 0;
                break;
            }
        }

        if (podePosicionarVertical) {
            for (int i = 0; i < TAM_NAVIO; i++) {
                tabuleiro[navio2_linha + i][navio2_coluna] = NAVIO;
            }
        } else {
            printf("Erro: Sobreposição detectada para o navio vertical!\n");
        }
    } else {
        printf("Erro: Navio vertical fora dos limites!\n");
    }

    // 3. Exibir o Tabuleiro
    printf("--- TABULEIRO BATALHA NAVAL ---\n\n");
    for (int i = 0; i < TAM_TABULEIRO; i++) {
        for (int j = 0; j < TAM_TABULEIRO; j++) {
            // Imprime o valor seguido de um espaço para legibilidade
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Quebra de linha ao fim de cada linha da matriz
    }

    return 0;
}