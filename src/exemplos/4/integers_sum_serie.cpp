#include <iostream>
#include "UNIVESP_COM_160.h"

using namespace std;

int main() {
    
    int min;
    int max;
    int incr;
    int total;

    cout << "==================" << endl;
    cout << "Soma de série v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl; 
    cout << "===================" << endl;
  
    cout << "Digite um número inicial: ";
    cin >> min;
    cout << "" << endl;

    cout << "Digite um número final: ";
    cout << "" << endl;
    cin >> max;

    cout << "Digite um incremento: ";
    cin >> incr;
    cout << "" << endl;

    total = 0;
    for (int i = min; i <= max; i += incr) {
        total += i;
        cout << "total = " << total << endl;
    }

    cout << "A soma da série é " << total << endl;
 
    return 0;
}
