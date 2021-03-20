#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "UNIVESP_COM_160.h"

using namespace std;

const int SIZE    = 7;
int       n[SIZE] = { 0 };

int main() {

    cout << "====================" << endl;
    cout << "Vetor aleatório v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl;
    cout << "====================" << endl;
    cout << "" << endl;

    cout << "Inicializando seed..." << endl;
    srand( time(0) );

    cout << "Lançando valores aleatórios..." << endl;
    for (int i = 1; i < 60000; i++) {
        n[1 + rand() % 6]++;
    }

    cout << "Elemento" << setw(14) << "Frequência" << endl;
    for (int j=1; j < SIZE; j++){
        cout << setw(8) << j << setw(14) << n[j] << endl;
    }

    return 0;
}
