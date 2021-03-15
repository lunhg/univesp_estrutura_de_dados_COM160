#include <iostream>
#include "UNIVESP_COM_160.h"


int main() {
    int num_elem;
  
    std::cout << "Vetor dinâmico v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << std::endl;
    std::cout << "Digite o tamanho do vetor: ";
    std::cin >> num_elem;
  
      int* c = new int[num_elem];
  
    for (int i = 0; i < num_elem; i++) {
        c[i] = 2*i;
    }
    for (int i = 0; i < num_elem; i++) {
        std::cout << "c[" << i << "] = " << c[i] << "\n";
    }

    delete [] c;
  
    return 0;
}

