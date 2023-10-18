//
// Created by Bernardo Brito on 12/10/23.
//

#include "nao_acertou.h"



bool nao_acertou(std::string& palavra_secreta, std::map<char,bool>& chutou){
    for(char letra : palavra_secreta){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}
