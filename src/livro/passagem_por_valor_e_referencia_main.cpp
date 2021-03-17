#include <iostream>
#include "UNIVESP_COM_160.h"
#include "passagem_por_valor_e_referencia.h"

using std::cout;
using std::endl;

int main(){
    
    cout "===================================="
    cout "Passagem por valor e referência v" << UNIVESP_COM_160_MAJOR_VERSION << "." << UNIVESP_COM_160_MINOR_VERSION << endl;
    cout << "================================="

    int x = 2;
    int y = 2;
    int z = 0;

    PassagemValRef pvr();

    cout << "x = " << x << " -> antes de aplicar PassagemValRef::squareByValue(int)" << endl;
    cout << "PassagemValRef::squareByValue(" << x << ") = " << pvr.squareByValue(x) << endl;
    cout << "x = " << x << " -> depois de aplicar PassagemValRef::squareByValue(int)" << endl;

    cout << "" << endl;
 
    cout << "y = " << y << " -> antes de aplicar PassagemValRef::squareByRef(int &)" << endl;
    cout << "PassagemValRef::squareByRef(" << y << ") --> void" << endl;
    pvr.squareByRef(y);
    cout << "y = " << y << " -> (depois de aplicar PassagemValRef::squareByRef(int &)" << endl;
}

