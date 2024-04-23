#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); // Seed para gerar n�meros aleat�rios
    char jogarNovamente;
    
    do {
        int numeroSecreto = rand() % 1000 + 1; // Gera um n�mero aleat�rio entre 1 e 1000
        int palpite;
        
        std::cout << "Eu tenho um numero entre 1 e 1000. Voc� consegue adivinhar o meu numero?" << std::endl;
        
        do {
            std::cout << "Digite seu palpite: ";
            std::cin >> palpite;
            
            if (palpite == numeroSecreto) {
                std::cout << "Excelente! Voc� adivinhou o numero!" << std::endl;
            } else if (palpite < numeroSecreto) {
                std::cout << "Muito baixo. Tente novamente." << std::endl;
            } else {
                std::cout << "Muito alto. Tente novamente." << std::endl;
            }
        } while (palpite != numeroSecreto);
        
        std::cout << "Voc� gostaria de jogar novamente (s/n)? ";
        std::cin >> jogarNovamente;
    } while (jogarNovamente == 's' || jogarNovamente == 'S');
    
    return 0;
}

