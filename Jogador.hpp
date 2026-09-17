#ifndef JOGADOR_H
#define JOGADOR_H

#include <iostream>

class Jogador {
    private:
        std :: string nome;
        char simbolo;
    public:
        Jogador(std :: string nome, char simbolo);
        std :: string getNome() const;
        char getSimbolo(); 
};

#endif