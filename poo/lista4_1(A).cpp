#include <iostream>
using namespace std;
// A)
unsigned long long fatorial(int n) {
    if (n == 0) return 1;
    unsigned long long resultado = 1;
    for (int i = 1; i <= n; ++i) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero;
    cout << "Digite um numero inteiro nao negativo: ";
    cin >> numero;
    if (numero < 0) {
        cout << "Numero invalido!" << endl;
    } else {
        unsigned long long fat = fatorial(numero);
        cout << "O fatorial de " << numero << " eh: " << fat << endl;
    }
    return 0;
}


