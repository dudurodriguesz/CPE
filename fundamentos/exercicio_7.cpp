#include <iostream>
int main(){
	int numero;
	bool ehprimo = true;
	std::cout << "Digite um número inteiro positivo: ";
    std::cin >> numero;

    
    if (numero <= 1) {
        std::cout << "O número nao eh primo." << std::endl;
        return 0;
    }

    
    for (int i = 2; i <= numero / 2; ++i) {
        if (numero % i == 0) {
            ehprimo = false;
            break;
        }
    }

    
    if (ehprimo) {
        std::cout << numero << " eh primo." << std::endl;
    } else {
        std::cout << numero << " nao eh primo." << std::endl;
    }

    return 0;
}
