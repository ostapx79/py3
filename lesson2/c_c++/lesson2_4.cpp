#include <iostream>
using namespace std;

int main()
{
    float x;
    x = 123.456;

    cout << x << endl; // выводит на консоль 123.456
    cout.width(10);
    cout.precision(5);
    cout << x << endl; // выводит на консоль |....123.46, и округляет в большую сторуну
    cout.width(10);
    cout.precision(2);
    cout << x << endl; // выводит на консоль |...1.2e+02, не могу пока это обеснить
    cout.width(10);
    cout.precision(3);
    cout << x << endl; // выводит на консоль |.......123, вывод без дробной части

    float y = 123.454;
    cout.width(10);
    cout.precision(5);
    cout << y << endl; // если в конце дробной части меньше чем 5 округляет к нулю |....123.45
    cout.width(10);
    cout.precision(2);
    cout << y << endl;
    cout.width(10);
    cout.precision(3);
    cout << y << endl;

    float z = 123.455;
    cout.width(10);
    cout.precision(5);
    cout << z << endl; // result: |....123.46
    // если в конце дробной части больше или равно 5 округляет в большую сторуну
    
    float a = 123.456;
    cout.width(0);
    cout.precision(5);
    cout << a << endl; // result: |123.46
    cout.width(0);
    cout.precision(2);
    cout << a << endl; // result: |1.2e+02
    cout.width(0);
    cout.precision(3);
    cout << a << endl; // result: |123
    // когда width(0) выводит без знакомест
    
    float b = 123.456;
    cout.precision(5);
    cout << b << endl; // result: |123.46
    // можно и без width(0) выводит на консоль без знакомест

    float c = 123.456;
    cout.precision(7);
    cout << c << endl; // result: |123.456

    return 0;
}

