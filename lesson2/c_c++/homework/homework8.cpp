#include <iostream>

int main()
{
    // Вычислите занчение вещественной переменной c при a=2 и b=3.
    using namespace std;

    int a = 2, b = 3;
    float c;

    c = a + 1 / 3;
    cout << c << endl; // result: 2
    cout.setf(ios::fixed);
    cout.precision(6);
    cout << c << endl; // result: 2.000000, как в Си

    c = a + 4 / 2 * 3 + 6;
    cout.precision(0);
    cout << c << endl; // result: 14
    cout.setf(ios::fixed);
    cout.precision(6);
    cout << c << endl; // resudlt: 14.000000

    c = (a + 4) / 2 * 3;
    cout.precision(0);
    cout << c << endl; // result: 9
    cout.setf(ios::fixed);
    cout.precision(6);
    cout << c << endl; // result:  9.000000

    c = (a + 4) / (b + 3) * a;
    cout.precision(0);
    cout << c << endl; // result: 2
    cout.setf(ios::fixed);
    cout.precision(6);
    cout << c << endl; // result: 2.000000

    return 0;
}
