#include <iostream>
using namespace std;
double calcular_e() {
    double e = 1.0;
    double termo = 1.0;
    for (int i = 1; i <= 10; ++i) {
        termo /= i;
        e += termo;
    }
    return e;
}

int main() {
    cout << "O valor de e eh: " << calcular_e() << endl;
    return 0;
}
