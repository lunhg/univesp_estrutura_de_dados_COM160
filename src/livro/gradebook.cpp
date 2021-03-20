#include <iostream>
#include <iomanip>
#include <math.h>
#include "UNIVESP_COM_160.h"
#include "gradebook.h"

using namespace std;

// o construtor inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook(string name, const int gradesArray[] ) {
    cout << "==============" << endl;
    cout << "GradeBook v" << UNIVESP_COM_160_VERSION_MAJOR << "." << UNIVESP_COM_160_VERSION_MINOR << endl;
    cout << "==============" << endl;
    setCourseName(name);
    
    for(int grade = 0; grade < students; grade++) {
        grades[grade] = gradesArray[grade];
    }
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
    cout << "Bem vindo ao curso " << getCourseName() << endl;
}

void GradeBook::processGrades(){
    outputGrades();
    cout << "A média da classe é " << setprecision(2) << fixed << getAverage() << endl;
    cout << "A menor nota é " << getMinimum() << endl;
    cout << "A maior nota é " << getMaximum() << endl;
    outputBarChart();
}

int GradeBook::getMinimum() {
    int lowGrade = 100;

    for(int grade = 0; grade < students; grade++){
        if(grades[grade] < lowGrade) {
            lowGrade = grades[grade];
        }
    }
    return lowGrade;
}

int GradeBook::getMaximum(){
    int highGrade = 0;
    for(int grade = 0; grade < students; grade++){
        if(grades[grade] > highGrade){
            highGrade = grades[grade];
        }
    }
    return highGrade;
}

double GradeBook::getAverage(){
    int total = 0;
    for(int grade=0; grade < students; grade++){
        total += grades[grade];
    }
    return static_cast<double>(total) / students;
}

void GradeBook::outputBarChart(){
    cout << "Distribuição de notas:" << endl;
    const int frequencySize = 11;
    int frequency[frequencySize] = {0};
     
    for(int grade=0; grade < students; grade++){
        frequency[grades[grade] / 10]++;
    }


    for(int count=0; count < frequencySize; count++){
        if (count == 0){
            cout << "  0-9: ";
        } else if (count == 10){
            cout << "  100: ";
        } else {
            cout << count * 10 << "-" << (count * 10) + 9 << ": ";
        }

        for (int stars = 0; stars < frequency[count]; stars++){
            cout << '*';
        }
        cout << "" << endl;
    }
}

void GradeBook::outputGrades(){
    cout << "As notas são: " << endl;
    for(int student = 0; student < students; student++){
        cout << "Estudante " << setw(2) << student + 1 << ": " << setw(3) << grades[student] << endl;
    }
}
