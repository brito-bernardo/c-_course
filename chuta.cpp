//
// Created by Bernardo Brito on 12/10/23.
//
#include <iostream>
#include "letra_existe.h"
#include "chuta.h"

//Funtion chuta getting paramethers chutou and chutes_errados as reference
void chuta(std::map<char, bool>& chutou, std::vector<char>& chutes_errados ){
    std::cout << "Seu chute: ";
    char chute;
    std::cin >> chute;

    (chutou)[chute] = true;

    if(letra_existe(chute)){
        std::cout << "Você acertou! Seu chute está na palavra." << std::endl;
    }
    else{
        std::cout << "Você errou! Seu chute não está na palavra." << std::endl;
        chutes_errados.push_back(chute);
    }
    std::cout << std::endl;
}