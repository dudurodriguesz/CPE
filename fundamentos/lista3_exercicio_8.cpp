#include <iostream>
using namespace std;
int main () {
	float numero1, numero2;
	cout << "Insira o numero1: ";
	cin >> numero1;
	cout << "Insira o numero2: ";
	cin>> numero2;
	int operacao;
	cout << "Escolha uma operacao (1=soma, 2=diferenca, 3=multiplicacao, 4=divisao): ";
	cin >> operacao;
	
	switch (operacao) {
		case 1:
			cout << "Soma entre os dois numeros: " << numero1 + numero2 << endl;
			break;
		case 2:
			cout << "Diferenca entre os dois numeros: " << numero1 - numero2 <<endl;
			break;
		case 3:
		cout << "Multiplicacao entre os dois numeros: " << numero1 * numero2 << endl;
		break;
		
		case 4:
		cout << "Divisao entre os dois numeros: " << numero1/numero2 << endl;
		break;
		
		default:
		cout << "Opcao invalida" << endl; 	
	
	}
	
	
	
	return 0;
}
