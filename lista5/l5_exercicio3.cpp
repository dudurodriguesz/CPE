#include <iostream>
#include <vector>

using namespace std;

// Função para verificar se um número é perfeito
bool isPerfect(int num) {
    int sum = 1; // Começa com 1, pois todo número é divisível por 1

    // Encontra os fatores e soma-os
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Retorna true se a soma dos fatores for igual ao número
    return sum == num;
}

// Função para encontrar e imprimir todos os números perfeitos entre 1 e um número máximo
void findPerfectNumbers(int maxNum) {
    cout << "Numeros perfeitos ate " << maxNum << ":\n";
    for (int i = 1; i <= maxNum; i++) {
        if (isPerfect(i)) {
            cout << i << " eh um numero perfeito. Fatores: 1 ";
            // Encontra e imprime os fatores
            vector<int> factors;
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    factors.push_back(j);
                }
            }
            for (size_t k = 0; k < factors.size(); k++) {
                cout << "+ " << factors[k] << " ";
            }
            cout << "= " << i << endl;
        }
    }
}

int main() {
    findPerfectNumbers(1000); // Encontra números perfeitos até 1000
    return 0;
}

