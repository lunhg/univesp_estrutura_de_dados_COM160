#include <iostream>
#include "UNIVESP_COM_160.h"

using std::cout;
using std::endl;

int main() {
 
    cout << "======================" << endl;
    cout << "Vetor de Inteiros v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << "\n"; 
    cout << "======================" << endl;
    int c[10] = {14, 0, 13};
  
    c[5] = 30;
    c[7] = 40;
    c[8] = 50;

    for (int i = 0; i < 10; i++) {
        std::cout << "c[" << i << "] = " << c[i] << "\n";
    }  
    return 0;
}

