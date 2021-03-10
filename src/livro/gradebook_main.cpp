#include <iostream>
#include "gradebook.h"

using std::cout;
using std::endl;

int main() {
    GradeBook gradebook1("CS101 Introdução à programação C++");
    GradeBook gradebook2("CS102 Estruturas de dados em C++");

    cout << "gradebook1 criado para o curso: " << gradebook1.getCourseName() << endl;
    cout << "" << endl;
    cout << "gradebook2 criado para o curso: " << gradebook2.getCourseName() << endl;
    cout << "" << endl;
    gradebook1.displayMessage();
    gradebook2.displayMessage();
    return 0;
}
