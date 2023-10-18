//
// Created by Bernardo Brito on 12/10/23.
//
#include <iostream>
#include "imprime_erros.h"




void imprime_erros(const std::vector<char>& chutes_errados){
    std::cout << "Chutes errados: ";
    for(char letra: chutes_errados){
        std::cout << letra << " ";
    }
    std::cout << std::endl;
}