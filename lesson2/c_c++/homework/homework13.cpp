#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    // Описание к этому файлу можно читать в homework13.c.

    using namespace std;
    float float_value;
    int int_value1, int_value2;

    cout << "Введите вещественное число => ";
    cin >> float_value;

    int_value1 = floor(float_value);
    int_value2 = ceil(float_value);

    cout << "Ближайшее целое в меньшую сторону => " << int_value1 << endl;
    cout << "Ближайшее целое в большую сторону => " << int_value2 << endl;
    cout << "Ближайшее целое число => " << (int)float_value << endl;
    // Если мы знаем что вещественное число состояние из 23.55, это работает. 
    // А если больше чем три не работает.
    cout << setprecision(2);
    cout << "Ближайшее целое число => " << float_value << endl;
    return 0;
}
