#include <iostream>

void torresDeHanoi(int numDiscos, char estacaOrigem, char estacaDestino, char estacaTemp) {
    if (numDiscos == 1) {
        std::cout << "Mover disco 1 da estaca " << estacaOrigem << " para a estaca " << estacaDestino << std::endl;
        return;
    }

    torresDeHanoi(numDiscos - 1, estacaOrigem, estacaTemp, estacaDestino);
    std::cout << "Mover disco " << numDiscos << " da estaca " << estacaOrigem << " para a estaca " << estacaDestino << std::endl;
    torresDeHanoi(numDiscos - 1, estacaTemp, estacaDestino, estacaOrigem);
}

int main() {
    int numDiscos;
    std::cout << "Digite o número de discos: ";
    std::cin >> numDiscos;

    torresDeHanoi(numDiscos, 'A', 'C', 'B');

    return 0;
}

