#include <iostream>
#include "UNIVESP_COM_160.h"
#include "analysis.h"

using std::cout;
using std::endl;

int main() {
    cout << "Análise de notas v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl; 
    
    Analysis application;
    application.processExamResults();
    return 0;
}
