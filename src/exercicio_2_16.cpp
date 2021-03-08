#include <iostream>

// Escreva um programa que solicita ao usuário inserir dois números, 
// obtém os dois números do usuário e imprime a soma, produto, diferença
// e o quociente de dois números
int number1;
int number2;

int sum(int a, int b){
    return a + b;
}

int dif(int a, int b){
    return a - b;
}

int pro(int a, int b){
    return a * b;
}

int divI(int a, int b){
    return a / b;
}

int quo(int a, int b){
    return a % b;
}

int main() {

    std::cout << "Escolha um primeiro número qualqer: ";
    std::cin  >> number1;
    std::cout << "" << std::endl;
    std::cout << "Agora escolha um segundo número qualquer: "; 
    std::cin  >> number2; 
    std::cout << "" << std::endl;
    std::cout << number1 << " + " << number2 << " = " << sum(number1, number2) << std::endl;
    std::cout << number1 << " - " << number2 << " = " << dif(number1, number2) << std::endl;
    std::cout << number1 << " * " << number2 << " = " << pro(number1, number2) << std::endl;
    std::cout << number1 << " / " << number2 << " = " << divI(number1, number2) << std::endl;
    std::cout << number1 << " % " << number2 << " = " << quo(number1, number2) << std::endl;
    return 0;
}
