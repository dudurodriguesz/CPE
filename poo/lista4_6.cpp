#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); 

    cout << "Pense em um numero entre 1 e 100." << endl;
    cout << "Vou tentar adivinhar qual eh o numero!" << endl;

    int min = 1;
    int max = 100;

    for (int tentativas = 1; tentativas <= 7; tentativas++) {
        int palpite = min + (rand() % (max - min + 1)); 
        cout << "Tentativa " << tentativas << ": eh " << palpite << "?" << endl;
        char resposta;
        cout << "Se sim, digite =. Se nao, digite < se for menor ou > se for maior." << endl;
        cin >> resposta;

        if (resposta == '=') {
            cout << "Adivinhei em " << tentativas << " tentativas!" << endl;
            return 0;
        } else if (resposta == '<') {
            max = palpite - 1; 
        } else if (resposta == '>') {
            min = palpite + 1; 
        }
    }

    cout << "Nao consegui adivinhar o numero em 7 tentativas. Você ganhou!" << endl;

    return 0;
}

