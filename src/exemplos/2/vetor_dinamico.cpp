#include <iostream>
#include "UNIVESP_COM_160.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    int num_elem;
  
    cout << "===================" << endl;
    cout << "Vetor dinâmico v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl; 
    cout << "===================" << endl;

    cout << "Digite o tamanho do vetor: ";
    cin >> num_elem;
  
      int* c = new int[num_elem];
  
    for (int i = 0; i < num_elem; i++) {
        c[i] = 2*i;
    }
    for (int i = 0; i < num_elem; i++) {
        cout << "c[" << i << "] = " << c[i] << "\n";
    }

    delete [] c;
  
    return 0;
}

