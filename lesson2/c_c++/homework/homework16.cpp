#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    // Описоание к этому д/з находится в файле homework16.c.
    
    using namespace std;
    srand(time(NULL));
    int first_student, number_of_students, first_attendant, second_attendants;

    first_student = 1;
    number_of_students = 30;

    first_attendant = first_student + rand()%(number_of_students - first_student + 1);
    second_attendants = first_student + rand()%(number_of_students - first_student + 1);

    cout << "Первый дежурный ученик по номером => " << first_attendant << endl;
    cout << "Второй дежурный ученик по номером => " << second_attendants << endl;

    return 0;
}
