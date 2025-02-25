#include <stdio.h>

int main() {
    char linha[10] = {'A','B','C','D','E','F','G','H','I','J'};
    
    // Criando o tabuleiro (Matriz 10x10)
    int tabuleiro[10][10];
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando um navio horizontalmente (exemplo: E5, E6, E7, E8)
    for (int i = 0; i < 4; i++) {
        tabuleiro[4][4 + i] = 7; // Linha E, começando na coluna 5.
    }

    // Posicionando um navio verticalmente (exemplo: H8, I8, J8)
    for (int i = 0; i < 3; i++) {
        tabuleiro[7 + i][7] = 7; // Coluna 8, começando na linha H.
    }

    // Exibir o tabuleiro formatado
    printf("   ");
    for(int j = 0; j < 10; j++){
        printf("%d ", j + 1); // Números das colunas
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%c  ", linha[i]); // Letras das linhas
        for(int j = 0; j < 10; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}