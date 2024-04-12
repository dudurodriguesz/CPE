#include <iostream>
#include <cmath>
using namespace std;

double calcular_e_potencia_x(double x) {
    double e_potencia_x = 1.0;
    double termo = 1.0;
    for (int i = 1; i <= 10; ++i) {
        termo *= x / i;
        e_potencia_x += termo;
    }
    return e_potencia_x;
}

int main() {
    double x;
   cout << "Digite o valor de x: ";
    cin >> x;
    cout << "O valor de e elevado a " << x << " eh: " << calcular_e_potencia_x(x) << endl;
    return 0;
}

