#include <iostream>
#include "gradebook.h"

using std::cout;
using std::endl;

// o construtor inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook(string name) {
    setCourseName(name);
}

// função para configurar o nome do curso
void GradeBook::setCourseName(string name) {
    courseName = name;
}

// funcção para obter o nome do curso
string GradeBook::getCourseName() {
    return courseName;
}

// exibe uma mensagem de boas-vindas
void GradeBook::displayMessage() {
    cout << "Welcome to the grade book for" << endl;
    cout << "  " << getCourseName() << endl;
}
