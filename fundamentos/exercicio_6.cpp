#include <iostream>
int main() {
	int numero1, numero2;
	std::cout << "Digite o numero1: " <<std::endl;
	std::cin >>numero1;
	
	std::cout << "Digite o numero2: " <<std::endl;
	std::cin >>numero2;
	
	if (numero1 % numero2 == 0) { 
	std::cout << " e multiplo de " << numero2 <<std::endl;
	} else {
		std::cout << numero1 << " nao e multiplo de " <<numero2 << std::endl;
	
	}
	return 0;
}
