#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Fun��o para gerar dois n�meros inteiros positivos de um d�gito
void gerarNumeros(int &num1, int &num2) {
    num1 = rand() % 9 + 1; // N�mero aleat�rio entre 1 e 9
    num2 = rand() % 9 + 1; // N�mero aleat�rio entre 1 e 9
}

// Fun��o para fazer uma pergunta de multiplica��o
void fazerPergunta(int num1, int num2) {
    cout << "Quanto eh " << num1 << " vezes " << num2 << "?\n";
}

int main() {
    srand(time(0)); // Seed para gerar n�meros aleat�rios

    int resposta;
    int num1, num2;
    bool acertou = false;

    // Loop principal
    while (!acertou) {
        gerarNumeros(num1, num2); // Gera novos n�meros
        fazerPergunta(num1, num2); // Exibe a pergunta

        // Solicita a resposta do aluno
        cout << "Sua resposta: ";
        cin >> resposta;

        // Verifica se a resposta est� correta
        if (resposta == num1 * num2) {
            cout << "Muito bom!\n";
            acertou = true; // Define acertou como true para sair do loop
        } else {
            cout << "Nao. Por favor, tente novamente.\n";
        }
    }

    return 0;
}

