#include <iostream>

int main()
{
    // Меняем занчения переменной, без допольнительной переменной.
    
    using namespace std;
    int first_variable, second_variable;

    cout << "first_variable=";
    cin >> first_variable;
    cout << "second_variable=";
    cin >> second_variable;

    first_variable = first_variable + second_variable;
    second_variable = first_variable - second_variable;
    first_variable = first_variable - second_variable;

    cout << "first_variable=" << first_variable << endl;
    cout << "second_variable=" << second_variable << endl;

    return 0;
}
