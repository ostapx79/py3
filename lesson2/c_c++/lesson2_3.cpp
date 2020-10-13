#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // вычисляем остаток от деление в Си++
    int a, b, c, d;
    c = 85;
    a = c / 10;
    b = c % 10;
    d = pow(a, b); // возведение a в степене b, результат: 32768

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
    cout << "d=" << d << endl;
    
    return 0;
}
