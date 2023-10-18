#include <iostream>
#include <string>
#include <map>
#include <vector>

#include "adiciona_palavra.h"
#include "chuta.h"
#include "imprime_cabecalho.h"
#include "imprime_erros.h"
#include "imprime_palavra.h"
#include "le_arquivo.h"
#include "letra_existe.h"
#include "nao_acertou.h"
#include "salva_arquivo.h"
#include "sorteia_palavra.h"

using namespace std;

string palavra_secreta; 
map<char, bool> chutou;
vector<char> chutes_errados;




int main () {
    imprime_cabecalho();

    palavra_secreta = sorteia_palavra();

    while(nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < 5){
        imprime_erros(chutes_errados);

        imprime_palavra(palavra_secreta, chutou);

        chuta(chutou, chutes_errados);
    }

    cout << "Fim de jogo!" << endl;
    cout << "A palavra secreta era: " << palavra_secreta << endl;
    if(nao_acertou(palavra_secreta, chutou)){
        cout << "Você perdeu! Tente novamente!" << endl;
    }
    else{
        cout << "Parabéns! Você acertou a palavra secreta!" << endl;

        cout << "Você deseja adicionar uma nova palavra ao banco? (S/N) ";
        char resposta;
        cin >> resposta;
        if(resposta == 'S'){
            adiciona_palavra();
        }
    }
    
    cin.get();
}