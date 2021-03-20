#include <iostream>
#include <iomanip>
#include "UNIVESP_COM_160.h"

using namespace std;

const int N = 10;
int n[N];

int main() {

    cout << "==============" << endl;
    cout << "Inicialização de vetor v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl;
    cout << "==============" << endl;
    cout << "" << endl;

    cout << "Alocando espaço para vetor com tamanho " << N << "..." << endl;


    cout << "Inicializando vetor com zeros..." << endl;
    for (int i = 0; i < N; i++) {
        n[i] = 0;
    }

    cout << "Elemento" << setw(14) << "Valor" << endl;
    for (int j=0; j < N; j++){
        cout << setw(8) << j << setw(14) << n[j] << endl;
    }

    return 0;
}
