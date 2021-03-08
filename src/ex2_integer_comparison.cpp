#include <iostream>
#include "UNIVESP_COM_160.h"

using std::cout;

int main() {
  int number1;
  int number2;


  std::cout << "Comparações v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << std::endl;
  cout << "Digite o primeiro número: ";
  std::cin >> number1;
  cout << "Digite o segundo número: ";
  std::cin >> number2;

  if (number1 == number2)
    cout << number1 << " ==  " <<  number2 << std::endl;
  if (number1 != number2)
    cout << number1 << " !=  " <<  number2 << std::endl;
  if (number1 < number2)
    cout << number1 << " <  " <<  number2 << std::endl;
  if (number1 > number2)
    cout << number1 << " >  " <<  number2 << std::endl;

  if (number1 <= number2)
    cout << number1 << " <=  " <<  number2 << std::endl;;
  if (number1 >= number2)
    cout << number1 << " >=  " <<  number2 << std::endl;;

  return 0;
}
