#include <iostream>
#include <cmath>

int main()
{ 
    using namespace std;
    // Напишите программу, которая вводит радиус круга и вычисляет его площадь и
    // длину окружности.

    double radius, aria, circumference;

    cout << "Введите радиус круга" << endl;
    cin >> radius;

    aria = M_PI * radius * radius;
    circumference = 2 * M_PI * radius;

    cout.setf(ios::fixed);
    cout.precision(3);
    cout << aria << '\n' << circumference << '\n';

    return 0;
}
