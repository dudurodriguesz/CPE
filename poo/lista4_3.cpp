#include <iostream>

int main() {
    for (int lado1 = 1; lado1 <= 20; ++lado1) {
        for (int lado2 = 1; lado2 <= 20; ++lado2) {
            for (int hipotenusa = 1; hipotenusa <= 20; ++hipotenusa) {
                
                if (lado1 * lado1 + lado2 * lado2 == hipotenusa * hipotenusa) {
                    std::cout << "Triplo de Pitagoras encontrado: ";
                    std::cout << "Lado1 = " << lado1 << ", Lado2 = " << lado2 << ", Hipotenusa = " << hipotenusa << std::endl;
                }
            }
        }
    }

    return 0;
}
