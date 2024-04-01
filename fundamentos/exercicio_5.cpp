#include <iostream>

int main(){
	float largura, comprimento;
	
	std::cout << "Digite a largura da sala (em metros): " << std::endl;
	std::cin >> largura;
	
	std::cout << "Digite o comprimento da sala (em metros): " <<std::endl;
	std::cin >>comprimento;
	
	std::cout << "Area da sala: " << largura * comprimento << " metros quadrados " <<std::endl;
	
	return 0;
}
