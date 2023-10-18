//
// Created by Bernardo Brito on 12/10/23.
//
#include <iostream>
#include "imprime_palavra.h"



void imprime_palavra(std::string& palavra_secreta,std::map<char, bool>& chutou ){
    for(char letra : palavra_secreta){
        if(chutou[letra]){
            std::cout << letra << " ";
        }
        else{
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}