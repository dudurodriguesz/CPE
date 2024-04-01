#include <iostream>
int main(){
	float raio;
	std::cout<< "Digite o raio da circunferência: ";
	std::cin >> raio;
	double pi = 3.14159;
	std::cout << "Diametro da circunferência: " << 2 * raio <<std:: endl;
	std::cout << "Area da circunferência: " << pi * raio * raio <<std:: endl;
	return 0;
}
