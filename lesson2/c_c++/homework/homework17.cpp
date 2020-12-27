#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    using namespace std;
    srand(time(NULL));
    float first_float_numb, second_float_numb;

    cout << "Введите первое вещественное число => ";
    cin >> first_float_numb;
    cout << "Введите второе вещественное число => ";
    cin >> second_float_numb;

    cout << "Первое случайное вещественное число => ";
    cout.setf(ios::fixed);
    cout.precision(2);
    cout << first_float_numb + (second_float_numb - first_float_numb) * rand() / RAND_MAX << endl;
    cout << "Второе случайное вещественное число => ";
    cout << first_float_numb + (second_float_numb - first_float_numb) * rand() / RAND_MAX << endl;
    cout << "Третие случайное вещественное число => ";
    cout << first_float_numb + (second_float_numb - first_float_numb) * rand() / RAND_MAX << endl;
    cout << "Четвертое случайное вещественное число => ";
    cout << first_float_numb + (second_float_numb - first_float_numb) * rand() / RAND_MAX << endl;
    cout << "Пятое случайное вещественное число => ";
    cout << first_float_numb + (second_float_numb - first_float_numb) * rand() / RAND_MAX << endl;

    return 0;
}
