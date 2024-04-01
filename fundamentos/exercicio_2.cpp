#include <iostream>
int main() {

    float numero1, numero2;

    // Solicita ao usuário fornecer dois números
    std::cout << "Digite o primeiro numero: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo número: ";
    std::cin >> numero2;

   
    std::cout << "Soma: " << numero1 + numero2 << std::endl;
    std::cout << "Produto: " << numero1 * numero2 << std::endl;
    std::cout << "Diferenca: " << numero1 - numero2 << std::endl;

    
    if (numero2 != 0) {
        std::cout << "Quociente: " << numero1 / numero2 << std::endl;
    } else {
        std::cout << "Não é possível calcular o quociente, pois o segundo número é zero." << std::endl;
    }

    return 0;
}
