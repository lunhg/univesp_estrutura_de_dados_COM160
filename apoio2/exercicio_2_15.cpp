#include <iostream>

// Declare a ordem de avaliação dos operadores em cada uma das seguintes instruções
// C++ e mostre o valor de x depois que cada instrução é realizada
// a) x = 7 + 3 * 6 / 2 - 1
// b) x = 2 % 2 + 2 * 2 - 2 / 2
// c) x = (3 * 9  * (3 + (9 * 3 / (3))))
int get_expected_a(){
    return 7 + 3 * 6 / 2 - 1;
}

int get_expected_b(){
    return 2 % 2 + 2 * 2 - 2 / 2;
}

int get_expected_c(){
    return 3 * 9 * (3 + (9*3/(3)));
}

int main() {
    
    std::cout << "Declare a ordem de avaliação dos operadores" << std::endl;
    std::cout << "em cada uma das seguintes instruções C++ e"  << std::endl;
    std::cout << "mostre o valor de x depois que cada instrução é realizada" << std::endl;
    std::cout << "a) x = 7 + 3 * 6 / 2 - 1              --> x = " << get_expected_a() << std::endl;
    std::cout << "b) x = 2 % 2 + 2 * 2 - 2 / 2          --> x = " << get_expected_b() << std::endl;
    std::cout << "c) x = (3 * 9  * (3 + (9 * 3 / (3)))) --> x = " << get_expected_c() << std::endl;
    return 0;
}
