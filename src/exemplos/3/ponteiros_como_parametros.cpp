#include <iostream>
#include "UNIVESP_COM_160.h"
using namespace std;

void valor_alocando_memoria(int* p){
    cout << "-- Chamando \'void valor_alocando_memoria(int*" << p << ")\'" << endl;
    cout << "  " << p << " = new int" << endl;
    p = new int;
    cout << "  *" << p << " = 7" << endl;
    *p = 7;
}
void valor_modificando_memoria(int* p){
    cout << "-- Chamando \'void valor_modificando_memoria(int*" << p << ")\'" << endl;
    cout << "  *" << p << " = 8" << endl;
    *p = 8;
}

void referencia(int*& p){
    cout << "-- Chamando \'void referencia(int*& " << p << ")\'" << endl; 
    cout << "  " << p << " = new int" << endl;
    p = new int;
    cout << "  *" << p << " = 9" << endl;
    *p = 9;
}

int main(){
    int a  = 1;
    int b  = 2;
    int c  = 3; 
    int* p1 = &a;
    int* p2 = &b;
    int* p3 = &c;

    cout << "==============================" << endl;
    cout << "Ponteiros como parâmetros v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl; 
    cout << "==============================" << endl;
  
    cout << "Antes:" << endl;
    cout << "  a = " << a << " --> p1 = " << *p1 << "(" << p1 << ")" << endl;  
    cout << "  b = " << b << " --> p2 = " << *p2 << "(" << p2 << ")" << endl; 
    cout << "  c = " << c << " --> p3 = " << *p3 << "(" << p3 << ")" << endl; 
    cout << endl;
  
    valor_alocando_memoria(p1); 
    valor_modificando_memoria(p2);
    referencia(p3);  

    cout << endl;

    cout << "Depois:" << endl;
    cout << "  a = " << a << " --> p1 = " << *p1 << "(" << p1 << ")" << endl;  
    cout << "  b = " << b << " --> p2 = " << *p2 << "(" << p2 << ")" << endl; 
    cout << "  c = " << c << " --> p3 = " << *p3 << "(" << p3 << ")" << endl; 
    cout << endl;

  return 0;
}
