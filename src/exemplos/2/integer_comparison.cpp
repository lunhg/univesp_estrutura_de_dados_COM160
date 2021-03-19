#include <iostream>
#include "UNIVESP_COM_160.h"

using std::cout;
using std::cin;
using std::endl;

int main() {
    int number1;
    int number2;

    cout << "================" << endl;
    cout << "Comparações v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << std::endl; 
    cout << "================" << endl;

    cout << "Digite o primeiro número: ";
    std::cin >> number1;
    cout << "Digite o segundo número: ";
    std::cin >> number2;

    cout << number1 << " == " <<  number2 << "(" << (bool) (number1 == number2) << ")" << std::endl;
    cout << number1 << " != " <<  number2 << "(" << (bool) (number1 != number2) << ")" << std::endl;
    cout << number1 << " <  " <<  number2 << "(" <<  (bool) (number1 < number2) << ")" << std::endl;
    cout << number1 << " >  " <<  number2 << "(" <<  (bool) (number1 > number2) << ")" << std::endl;
    cout << number1 << " <= " <<  number2 << "(" << (bool) (number1 <= number2) << ")" << std::endl;
    cout << number1 << " >= " <<  number2 << "(" << (bool) (number1 >= number2) << ")" << std::endl;
    
    return 0;
}
