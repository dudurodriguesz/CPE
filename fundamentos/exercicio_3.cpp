#include <iostream>
int main(){
	float raio;
	std::cout<< "Digite o raio da circunfer�ncia: ";
	std::cin >> raio;
	double pi = 3.14159;
	std::cout << "Diametro da circunfer�ncia: " << 2 * raio <<std:: endl;
	std::cout << "Area da circunfer�ncia: " << pi * raio * raio <<std:: endl;
	return 0;
}
