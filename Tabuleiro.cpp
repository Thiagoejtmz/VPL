#include "Tabuleiro.hpp"

#define ROWS 3

Tabuleiro :: Tabuleiro() {
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < ROWS; j++)
            this->tabuleiro[i][j] = ' ';
}

bool Tabuleiro :: validaJogada(int linha, int coluna, char simbolo){
    if(linha <= 0 && linha >= 2 && coluna <= 0 && coluna >= 2) 
        return false;
    if(simbolo != 'O' && simbolo != 'X')
        return false;
    if(this->tabuleiro[linha][coluna] != ' ')
        return false;
    return true;
}

void Tabuleiro :: fazerJogada(int linha, int coluna, char simbolo) {
    if(Tabuleiro :: validaJogada(linha, coluna, simbolo))
        this->tabuleiro[linha][coluna] = simbolo;
}

char verificaDiagonal(char tabuleiro[3][3]){
    for(int i = 0; i < ROWS - 1; i++){
        if(tabuleiro[i][i] != tabuleiro[i + 1][i + 1] || tabuleiro[i][i] == ' ')
            return false;
    }
    for(int i = 0; i < ROWS - 1; i++){
        if(tabuleiro[i][ROWS - 1 - i] != tabuleiro[i + 1][ROWS + 1] || tabuleiro[i][i] == ' ')
            return false;
    }
    return true; 
}

char Tabuleiro :: verificarEstadoPartida() {
    for(int i = 0; i < ROWS; i++)
        for(int j = 0; j < ROWS; j++)
            if(this->tabuleiro[i][j] == ' ') return 'P';
    
}