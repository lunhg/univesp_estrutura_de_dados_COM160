#include <iostream>
#include "UNIVESP_COM_160.h"

const int NUM_ELEM = 10;

int main() {
    std::cout << "Comparador de inteiros v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << "\n";

    int c[NUM_ELEM];
    for (int i = 0; i < NUM_ELEM; i++) {
        c[i] = 2*i;
    }
    for (int i = 0; i < NUM_ELEM; i++) {
        std::cout << "c[" << i << "] = " << c[i] << "\n";
    }  
    return 0;
}

