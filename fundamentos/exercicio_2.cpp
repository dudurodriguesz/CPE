#include <iostream>
int main() {

    float numero1, numero2;

    // Solicita ao usu�rio fornecer dois n�meros
    std::cout << "Digite o primeiro numero: ";
    std::cin >> numero1;

    std::cout << "Digite o segundo n�mero: ";
    std::cin >> numero2;

   
    std::cout << "Soma: " << numero1 + numero2 << std::endl;
    std::cout << "Produto: " << numero1 * numero2 << std::endl;
    std::cout << "Diferenca: " << numero1 - numero2 << std::endl;

    
    if (numero2 != 0) {
        std::cout << "Quociente: " << numero1 / numero2 << std::endl;
    } else {
        std::cout << "N�o � poss�vel calcular o quociente, pois o segundo n�mero � zero." << std::endl;
    }

    return 0;
}
