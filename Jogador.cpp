#include "Jogador.hpp"

std :: string Jogador :: getNome() const{
    return this->nome;
}

char Jogador :: getSimbolo(){
    return this->simbolo;
}

Jogador :: Jogador(std :: string nome, char simbolo) : nome(nome), simbolo(simbolo) {};