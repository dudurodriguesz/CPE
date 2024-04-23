#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Função para gerar dois números inteiros positivos de um dígito
void gerarNumeros(int &num1, int &num2) {
    num1 = rand() % 9 + 1; // Número aleatório entre 1 e 9
    num2 = rand() % 9 + 1; // Número aleatório entre 1 e 9
}

// Função para fazer uma pergunta de multiplicação
void fazerPergunta(int num1, int num2) {
    cout << "Quanto eh " << num1 << " vezes " << num2 << "?\n";
}

int main() {
    srand(time(0)); // Seed para gerar números aleatórios

    int resposta;
    int num1, num2;
    bool acertou = false;

    // Loop principal
    while (!acertou) {
        gerarNumeros(num1, num2); // Gera novos números
        fazerPergunta(num1, num2); // Exibe a pergunta

        // Solicita a resposta do aluno
        cout << "Sua resposta: ";
        cin >> resposta;

        // Verifica se a resposta está correta
        if (resposta == num1 * num2) {
            cout << "Muito bom!\n";
            acertou = true; // Define acertou como true para sair do loop
        } else {
            cout << "Nao. Por favor, tente novamente.\n";
        }
    }

    return 0;
}

