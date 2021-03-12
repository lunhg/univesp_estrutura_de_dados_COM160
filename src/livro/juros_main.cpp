#include <iostream>
#include <iomanip>
#include "juros.h"
#include "UNIVESP_COM_160.h"

using std::cout;
using std::endl;
using std::fixed;
using std::setw;
using std::fixed;

int main(){
    
    cout << "================" << endl;
    cout << "Juros v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl;  
    cout << "================" << endl;
    cout << "" << endl;

    double amount;
    int years;

    years = 10;
    Juros juros(1000.0, 0.05);

    cout << "Ano" << setw(21) << "   Quantidade depositada" << endl;
    for(int i=0; i <= years; i++){
        amount = juros.getAmountForYear(i);
        cout << setw(4) << i << setw(21) << amount << endl;
    }

    return 0;
}
