#include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "Digite um numero de 5 digitos: ";
    cin >> numero;
    

    if (numero >= 10000 && numero <= 99999) {
        int digito1 = numero / 10000;
        int digito2 = (numero / 1000) % 10;
        int digito3 = (numero / 100) % 10;
        int digito4 = (numero / 10) % 10;
        int digito5 = numero % 10;

        if (digito1 == digito5 && digito2 == digito4) {
        	cout << "Esse numero eh um palindromo. \n";
        	
        }else {
        	cout << "Esse numero nao eh um palindromo. \n";
			}
	
    }

    
    
    return 0;
}
