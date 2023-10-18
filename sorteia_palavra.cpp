//
// Created by Bernardo Brito on 12/10/23.
//
#include <vector>
#include <ctime>
#include <cstdlib>

#include "le_arquivo.h"



std::string sorteia_palavra(){
    std::vector<std::string> palavras = le_arquivo();

    srand((unsigned) time(nullptr));
    int indice_sorteado = rand() % palavras.size();

    return palavras[indice_sorteado];
}