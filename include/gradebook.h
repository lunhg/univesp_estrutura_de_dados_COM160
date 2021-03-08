#include <string>
using std::string;

class GradeBook {

    public:
        // construtor que inicializa courseName
        GradeBook(string);

        // função que configura o nome do curso
        void setCourseName(string);

        // função que obtém o nome do curso
        string getCourseName();

        // função que exibe uma mensagem de boas-vindas
        void displayMessage();

    private:

        //nome do curso
        string courseName;
};