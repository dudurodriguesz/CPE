#include <iostream>
#include <cmath>

using namespace std;

int binarioParaDecimal(int binario) {
    int decimal = 0, posicao = 0;

    
    while (binario != 0) {
        int digito = binario % 10; 
        decimal += digito * pow(2, static_cast<double>(posicao)); 
        binario /= 10; 
        posicao++; 
    }

    return decimal;
}

int main() {
    int binario;

    cout << "Digite um numero binario: ";
    cin >> binario;

    int decimal = binarioParaDecimal(binario);

    cout << "Valor decimal correspondente: " << decimal << endl;

    return 0;
}
