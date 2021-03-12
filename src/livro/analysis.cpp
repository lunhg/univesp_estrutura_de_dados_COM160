#include <iostream>
#include "analysis.h"

using std::cout;
using std::cin;
using std::endl;

void Analysis::processExamResults(){
    int passes = 0;
    int failures = 0;
    int studentCounter = 1;
    int result;

    while(studentCounter <= 10) {
        cout << "Entre com o resultado(1-passou, 2-falhou): " << endl;
        cin >> result;
        
        if (result == 1) {
            passes = passes + 1;
        } else {
            failures = failures + 1;
        }

        studentCounter = studentCounter + 1;
    }

    cout << "Passaram " << passes << endl;
    cout << "Falharam " << failures << endl;

    if (passes > 8) {
        cout << "Oferecer bolsa de estudos" << endl;
    }
}
