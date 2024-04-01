#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str;
    std::cout << "Digite uma string com 5 caracteres: ";
    std::cin >> str;

    
    if (str.length() != 5) {
        std::cerr << "Erro: A string deve ter exatamente 5 caracteres." << std::endl;
        return 1; 
    }

    
    int contaA = 0, contaE = 0, contaI = 0, contaO = 0, contaU = 0;

    
    for (size_t i = 0; i < str.length(); i++) {
        char c = str[i];
        switch (c) {
            case 'a':
                contaA++;
                break;
            case 'e':
                contaE++;
                break;
            case 'i':
                contaI++;
                break;
            case 'o':
                contaO++;
                break;
            case 'u':
                contaU++;
                break;
            default:
                break;
        }
    }

    
    std::cout << "Quantidade de vezes que as vogais aparecem na string:" << std::endl;
    std::cout << "a: " << contaA << std::endl;
    std::cout << "e: " << contaE << std::endl;
    std::cout << "i: " << contaI << std::endl;
    std::cout << "o: " << contaO << std::endl;
    std::cout << "u: " << contaU << std::endl;

    
    std::replace(str.begin(), str.end(), 'a', 'T');
    std::replace(str.begin(), str.end(), 'e', 'o');
    std::replace(str.begin(), str.end(), 'i', 'u');

    
    std::cout << "String criptografada: " << str << std::endl;

    return 0;
}

