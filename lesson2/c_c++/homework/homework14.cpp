#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{

    // Напишите программу, которая вводит два целых числа, a и b (a < b), и
    // выводит на экран 5 случайных целых чисел на отрезке [a, b].
    using namespace std;
    srand(time(NULL));
    int first_numb, second_numb;
    cout << "Введите первое целое число => ";
    cin >> first_numb;
    cout << "Введите второе целое число => ";
    cin >> second_numb;

    cout << first_numb + rand()%(second_numb - first_numb + 1) << endl;
    cout << first_numb + rand()%(second_numb - first_numb + 1) << endl;
    cout << first_numb + rand()%(second_numb - first_numb + 1) << endl;
    cout << first_numb + rand()%(second_numb - first_numb + 1) << endl;
    cout << first_numb + rand()%(second_numb - first_numb + 1) << endl;

    return 0;
}
