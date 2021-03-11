#include <iostream>
#include "UNIVESP_COM_160.h"
#include "gradebook.h"

using std::cout;
using std::endl;

// o construtor inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook(string name) {
    setCourseName(name);
}

// função para configurar o nome do curso
void GradeBook::setCourseName(string name) {
    if ( name.length() <= 25) {
        courseName = name;
    } else {
        courseName = name.substr(0,25);
        cout << "Nome \"" << name << "\" excede o tamanho máximo (25).\n" << endl;
    }
}

// funcção para obter o nome do curso
string GradeBook::getCourseName() {
    return courseName;
}

// exibe uma mensagem de boas-vindas
void GradeBook::displayMessage() {
    cout << "Welcome to the gradebook v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl;
    cout << "  " << getCourseName() << endl;
}

void GradeBook::determineClassAverage() {
    int total;
    int gradeCounter;
    int grade;
    int average;
    total = 0;
    gradeCounter = 1;
    while(gradeCounter <= 10) {
        cout << "Enter grade: ";
        std::cin >> grade;
        total = total + grade;
        gradeCounter = gradeCounter + 1;
    }
    average = total / 10;
    cout  << "\nTotal: " << total << endl;
    cout << "Média:" << average << endl;
}


