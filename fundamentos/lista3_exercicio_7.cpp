#include <iostream>	
using namespace std;

int main() {
	string senha;
	cout << "Insira a senha de acesso: \n";
	cin >> senha;
	
	if (senha == "1234") {
		cout << "Acesso permitido. ";
		
		
	} else {
		cout << "Acesso negado. ";
	}
	
	return 0;
}
