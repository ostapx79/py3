#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 3;

    // Результат как в программах на Си
    cout << a << "=Z(" << b << ")" << endl; // 5=Z(3)
    cout << "Z(a)=(b)" << endl; // Z(a)=(b)
    cout << "Z(" << a << ")=(" << a+b << ")" << endl; // Z(5)=(3)

    return 0;
}
