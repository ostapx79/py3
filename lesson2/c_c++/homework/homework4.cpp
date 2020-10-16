#include <iostream>

int main()
{
    // Напишите программу которая меняет значения двух переменых в памяти,
    
    using namespace std;

    int first_variable, second_variable, trihd_variable;

    cout << "first_variable=";
    cin >> first_variable;
    cout << "second_variable=";
    cin >> second_variable;

    trihd_variable = first_variable;
    first_variable = second_variable;
    second_variable = trihd_variable;

    cout << "first_variable=" << first_variable << endl;
    cout << "second_variable=" << second_variable << endl;

    return 0;
}
