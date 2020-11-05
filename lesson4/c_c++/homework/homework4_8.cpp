//: c_c++/homework4_8.cpp
// Напишите программу, которая строит последовательность из N случаных чисел на
// отрезке 0 до 1 и опредиляет, сколько из них поподают в полуинтервалы [0.00,
// 0.25], [0.25, 0.50], [0.50, 0.75], [0.75, 1]. Сравние результаты, получены
// при N = 10, 100, 1000, 10000.

#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    using namespace std;
    srand(time(NULL));
    int numb_rand;
    float result;
    cout << "Введите число => ";
    cin >> numb_rand;

    int numb_x = 0;
    float numb_y = 1.f;
    int numb_i = 0;
    while (numb_i < numb_rand) {
        result = numb_x + (numb_y - numb_x) * rand() / RAND_MAX;
        numb_i++;
        cout.setf(ios::fixed);
        cout.precision(2);
        cout << "Псевдослучаное число от 0 до 1 => " << result << endl;
    }
    return 0;
}
