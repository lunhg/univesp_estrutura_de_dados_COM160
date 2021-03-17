#include <iostream>
#include "UNIVESP_COM_160.h"

const int NUM_ELEM = 10;

using std::cout;
using std::endl;

int main() {
    cout << "========================" << endl;   
    cout << "Vetor com constante v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR <<  endl;
    cout << "========================" << endl;   
    int c[NUM_ELEM];
    for (int i = 0; i < NUM_ELEM; i++) {
        c[i] = 2*i;
    }
    for (int i = 0; i < NUM_ELEM; i++) {
        std::cout << "c[" << i << "] = " << c[i] << "\n";
    }  
    return 0;
}

