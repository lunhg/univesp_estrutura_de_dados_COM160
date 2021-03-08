#include <iostream>

// Dada a equação algébrica y=ax^3 + 7, qual das seguintes, se houver alguma
// são intruções C++ corretas para esta equação?
// a) y = a * x * x * x + 7
// b) y = a * x * x * (x + 7)
// c) y = (a * x) * x * (x + 7)
// d) y = (a * x) * x * x + 7
int y;
const int x = 2;
const int a = 2;
const int esperado = 23; 

// Para verificar, vamos atribuir a=2 e x=2,
// de formar que a opção correta deve dar
// y = 2 * 2^3 + 7 => y = 2 * 8 + 7 => y = 16 + 7 => y = 23
int main() {


    std::cout << "Dada a equação algébrica y=ax^3 + 7," << std::endl;
    std::cout << "qual das seguintes, se houver alguma" << std::endl;
    std::cout << "são intruções C++ corretas para esta equação?" << std::endl;
    std::cout << "" << std::endl;

    y = a * x * x * x + 7;
    if (y == esperado) {
        std::cout << "a) y = a * x * x * x + 7 => CORRETO" << std::endl;
    }
    else {
        std::cout << "a) y = a * x * x * x + 7 => INCORRETO" << std::endl;
    }


    y = a * x * x * (x + 7);
    if (y == esperado) {
        std::cout << "b) y = a * x * x * (x + 7) => CORRETO" << std::endl;
    }
    else {
        std::cout << "b) y = a * x * x * (x + 7) => INCORRETO" << std::endl;
    }


    y = (a * x) * x * (x + 7);
    if (y == esperado) {
        std::cout << "c) y = (a * x) * x * (x + 7) => CORRETO" << std::endl;
    }
    else {
        std::cout << "c) y = (a * x) * x * (x + 7) => INCORRETO" << std::endl;
    }


    y = (a * x) * x * x + 7;
    if (y == esperado) {
        std::cout << "d) y = (a * x) * x * x + 7 => CORRETO" << std::endl;
    }
    else {
        std::cout << "d) y = (a * x) * x * x + 7 => INCORRETO" << std::endl;
    }


    y = a * (x * x * x) + 7;
    if (y == esperado) {
        std::cout << "e) y = a * (x * x * x) + 7 => CORRETO" << std::endl;
    }
    else {
        std::cout << "e) y = a * (x * x * x) + 7 => INCORRETO" << std::endl;
    }

    y = a * x * (x * x + 7);
    if (y == esperado) {
        std::cout << "f) y = a * x * (x * x + 7) => CORRETO" << std::endl;
    }
    else {
        std::cout << "f) y = a * x * (x * x + 7) => INCORRETO" << std::endl;
    }
    return 0;
}
