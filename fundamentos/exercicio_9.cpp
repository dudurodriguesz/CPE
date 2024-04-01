

#include <iostream>

using namespace std;

int main() {
    double distancia, valorTotal, custoMedio;

    cout << "Digite a dist�ncia percorrida em quil�metros: ";
    cin >> distancia;

    
    if (distancia <= 50) {
        valorTotal = distancia * 1.75;
    } else if (distancia <= 150) {
        valorTotal = 50 * 1.75 + (distancia - 50) * 1.65;
    } else {
        valorTotal = 50 * 1.75 + 100 * 1.65 + (distancia - 150) * 1.50;
    }

    
    custoMedio = valorTotal / distancia;

    
    cout << "O valor total a pagar �: " << valorTotal << " reais" << endl;
    cout << "O custo m�dio por quil�metro �: " << custoMedio << " reais/km" << endl;

    return 0;
}
