#include <iostream>
#include <vector>
#include "funcoes.h"
using namespace std;

// definindo funções

void inicio() {
    cout << endl;
    cout << "=============" << endl;
    cout << "JOGO DA FORCA" << endl;
    cout << "=============" << endl << endl;
    cout << "Salve o boneco da forca adivinhando as letras da palavra oculta!" << endl << endl;
};

void mostra_erros(int erros) {
    if (erros == 0) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
        cout << endl;
    }
    else if (erros == 1) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
        cout << endl;
    }
    else if (erros == 2) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << "  |   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
        cout << endl;
    }
    else if (erros == 3) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|   | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
        cout << endl;
    }
    else if (erros == 4) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << "      | \n";
        cout << "      | \n";
        cout << " ========= \n";
        cout << endl;
    }
    else if (erros == 5) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " /    | \n";
        cout << "      | \n";
        cout << " ========= \n";
        cout << endl;
    }
    else if (erros == 6) {
        cout << "  +---+ \n";
        cout << "  |   | \n";
        cout << "  O   | \n";
        cout << " /|\\  | \n";
        cout << " / \\  | \n";
        cout << "      | \n";
        cout << " ========= \n";
        cout << endl;
    }
};

void mostra_status(vector<char> incorreto, string resposta) {
    cout << "Palpites Incorretos: " << endl;

    for(int i = 0; i < incorreto.size(); i++) {
        cout << incorreto[i] << " ";
    }

    cout << endl << "Palavra Oculta: " << endl;
    for(int i = 0; i < resposta.length(); i++) {
        cout << resposta[i] << " ";
    }
};

void final(string resposta, string palavra_oculta) {
    if(resposta == palavra_oculta) {
        cout << "Parabens! Voce acertou a palvra oculta '"<< palavra_oculta <<"' e conseguiu salvar o boneco da forca!" << endl;
        cout << endl;
        cout << endl;
    }
    else {
        cout << "Ops... voce nao conseguiu salvar o boneco da forca :(" << endl;
        cout << "Reabra o programa para tentar novamente." << endl;
        cout << endl;
        cout << endl;
    }
};