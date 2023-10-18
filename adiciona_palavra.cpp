//
// Created by Bernardo Brito on 12/10/23.
//
#include <iostream>
#include <string>
#include <vector>
#include "le_arquivo.h"
#include "salva_arquivo.h"


void adiciona_palavra(){
    std::cout << "Digite a nova palavra, usando letras maiúsculas." << std::endl;
    std::string nova_palavra;
    std::cin >> nova_palavra;

    std::vector<std::string> lista_palavras = le_arquivo();
    lista_palavras.push_back(nova_palavra);

    salva_arquivo(lista_palavras);
}