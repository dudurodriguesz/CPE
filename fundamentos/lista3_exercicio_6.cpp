#include <iostream>
using namespace std;

int main (){
	int lado1, lado2, lado3;
	cout << "Insira a medida do lado1 do triangulo: ";
	cin >> lado1;
	cout << "Insira a medida do lado2 do triangulo: ";
	cin >> lado2;
	cout << "Insira a medida do lado3 do triangulo: ";
	cin >> lado3;
	
	if (lado1 != lado2 && lado2 != lado3) {
		cout << "O triangulo eh escaleno! \n";
	} else if (lado1 == lado2 && lado2 == lado3) {
		cout << "O triangulo eh equilatero! \n";
	} else { 
	cout << "O triangulo eh isosceles! ";
		
	}
	
	
	
	return 0;
}
