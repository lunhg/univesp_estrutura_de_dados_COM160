#include <iostream>
#include <iomanip>
#include <math.h>
#include "UNIVESP_COM_160.h"
#include "gradebook.h"

using std::cout;
using std::cin;
using std::endl;
using std::fixed;
using std::setprecision;

// o construtor inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook(string name) {
    cout << "==============" << endl;
    cout << "GradeBook v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl;
    cout << "==============" << endl;
    setCourseName(name);
    studentMaximum = 0;
}

// função para configurar o nome do curso
void GradeBook::setCourseName(string name) {
    if ( name.length() <= 25) {
        courseName = name;
    } else {
        courseName = name.substr(0,25);
        cout << "WARN: Nome \"" << name << "\" excede o tamanho máximo (25).\n" << endl;
    }
}

// funcção para obter o nome do curso
string GradeBook::getCourseName() {
    return courseName;
}

// exibe uma mensagem de boas-vindas
void GradeBook::displayMessage() {
    cout << "Bem vindo ao curso " << getCourseName() << endl;
}

void GradeBook::inputGrades() {
    int grade1;
    int grade2;
    int grade3;

    cout << "Entre com as 1a nota: ";
    cin >> grade1;
    cout << endl;

    cout << "Entre com as 2a nota: ";
    cin >> grade2;
    cout << endl;

    cout << "Entre com as 3a nota: ";
    cin >> grade3;
    cout << endl;

    studentMaximum = fmax(grade1, grade2, grade3);
}

void GradeBook::displayGradeReport(){
    cout << "Relatório das notas: " << endl;
    cout << "  Nota máxima: " << studentMaximum;
}
