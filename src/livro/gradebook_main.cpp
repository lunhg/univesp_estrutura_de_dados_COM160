#include <iostream>
#include "gradebook.h"

using std::cout;
using std::endl;

int main() {
    GradeBook gradebook1("CS101 Introdução à programação C++");
    gradebook1.displayMessage();
    gradebook1.determineClassAverage();
    return 0;
}
