#include <iostream>
#include <iomanip> 
using namespace std;


float celsiusParaFahrenheit(float celsius) {
    return 9.0 / 5.0 * celsius + 32;
}

int main() {
    
    cout << setw(10) << "Celsius" << setw(15) << "Fahrenheit" << endl;
    
    
    for (int celsius = 0; celsius <= 100; celsius++) {
        float fahrenheit = celsiusParaFahrenheit(celsius);
        cout << fixed << setw(10) << celsius << setw(15) << setprecision(1) << fahrenheit << endl;
    }

    return 0;
}

