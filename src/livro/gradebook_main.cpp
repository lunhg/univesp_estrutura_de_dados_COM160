#include <iostream>
#include "gradebook.h"

using std::cout;
using std::endl;

int main() {

    int gradesArray[GradeBook::students] = {76, 91, 100, 84, 80, 78, 86, 10, 97, 64};

    GradeBook gradebook("CS101 Introdução à programação C++", gradesArray);
    gradebook.displayMessage();
    gradebook.processGrades();
    return 0;
}
