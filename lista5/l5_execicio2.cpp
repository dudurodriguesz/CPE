#include <iostream>
#include <cmath>

// Função para verificar se um número é primo
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Função para imprimir todos os números primos entre 1 e 1000
void printPrimes() {
    std::cout << "Números primos entre 1 e 1000:" << std::endl;
    for (int i = 2; i <= 1000; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;
}

int main() {
    // Parte (b)
    printPrimes();

    // Parte (c)
    std::cout << "Números primos entre 1 e 1000 usando a raiz quadrada:" << std::endl;
    for (int i = 2; i <= 1000; ++i) {
        if (isPrime(i)) {
            std::cout << i << " ";
        }
    }
    std::cout << std::endl;

    return 0;
}

