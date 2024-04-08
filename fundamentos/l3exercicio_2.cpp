#include <iostream>
using namespace std;

int main () {
	float valorAlcool, valorGasolina;
	cout << "Insira o valor do Alcool: ";
	cin >> valorAlcool;
	cout << "Insira o valor da gasolina: ";
	cin >> valorGasolina;
	float resultado = valorAlcool/valorGasolina;
	if  (resultado <= 0.7) {
		cout << "E mais eficiente abastecer com alcool! \n"<< resultado;
	}else {
		cout << "E mais eficiente abastecer com gasolina! \n" <<resultado;
		}
	
	return 0;
}
