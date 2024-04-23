#include <iostream>
#include <vector>

using namespace std;

// Fun��o para verificar se um n�mero � perfeito
bool isPerfect(int num) {
    int sum = 1; // Come�a com 1, pois todo n�mero � divis�vel por 1

    // Encontra os fatores e soma-os
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    // Retorna true se a soma dos fatores for igual ao n�mero
    return sum == num;
}

// Fun��o para encontrar e imprimir todos os n�meros perfeitos entre 1 e um n�mero m�ximo
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
    findPerfectNumbers(1000); // Encontra n�meros perfeitos at� 1000
    return 0;
}

