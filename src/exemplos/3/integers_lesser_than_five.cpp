#include <iostream>
#include "UNIVESP_COM_160.h"

using namespace std;

int main() {
    int number1;
    int counter = 0;
    int amount  = 0;

    cout << "===========================" << endl; 
    cout << "Inteiros menores que 5 v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl; 
    cout << "===========================" << endl; 

    while (counter < 10) {
  
    cout << "Digite um número (" << counter << ")" << endl;
    std::cin >> number1;

    if (number1 < 5) {
      amount++;
    }
    counter++;
  }

  cout << "Quantidade de Números Menores que 5: [" << amount <<  "]" << endl;
 
  return 0;
}
