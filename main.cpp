#include <iostream>
#include <vector>
#include "funcoes.h"
using namespace std;

int main() {

    inicio();

    string palavra_oculta = "algoritmo";
    string resposta = "_________";
    int erros = 0;
    vector<char> incorreto;
    bool palpite = false;
    char letra;

    while(resposta != palavra_oculta && erros < 7) {
        mostra_erros(erros);
        mostra_status(incorreto, resposta);

        cout << endl;
        cout << endl << endl << "Digite seu palpite: ";
        cin >> letra;
        cout << endl;
        for(int i = 0; i < palavra_oculta.length(); i++) {
            if(letra == palavra_oculta[i]) {
                resposta[i] = letra;
                palpite = true;
            }
        }
        if(palpite) {
            cout << endl << "Correto!" << endl;
            cout << endl;
        }
        else {
            cout << endl << "Incorreto!" << endl;
            incorreto.push_back(letra);
            cout << endl;
            erros++;
        }
        palpite = false;
    };

    final(resposta, palavra_oculta);

    system("pause");
    return 0;
};