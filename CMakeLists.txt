cmake_minimum_required(VERSION 3.26)
project(C___projeto)

set(CMAKE_CXX_STANDARD 17)

add_executable(C___projeto forca.cpp
        adiciona_palavra.cpp
        chuta.cpp
        imprime_erros.cpp
        imprime_palavra.cpp
        le_arquivo.cpp
        letra_existe.cpp
        nao_acertou.cpp
        salva_arquivo.cpp
        sorteia_palavra.cpp)
