#include <iostream>
#include "gradebook.h"

using std::cout;
using std::endl;

int main() {
    GradeBook gradebook("CS101 Introdução à programação C++");
    gradebook.displayMessage();
    gradebook.inputGrades();
    gradebook.displayGradeReport();
    return 0;
}
