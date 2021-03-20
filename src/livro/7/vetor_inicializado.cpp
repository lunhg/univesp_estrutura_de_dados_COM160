#include <iostream>
#include <iomanip>
#include "UNIVESP_COM_160.h"

using namespace std;

int n[] = {8, 73, 93, 3674, 1, 498, 3, 89, 1234, 8};

int main() {

    cout << "=======================" << endl;
    cout << "Vetor inicializado v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl;
    cout << "=======================" << endl;
    cout << "" << endl;

    cout << "Elemento" << setw(14) << "Valor" << endl;
    for (int j=0; j < 10; j++){
        cout << setw(8) << j << setw(14) << n[j] << endl;
    }

    return 0;
}
