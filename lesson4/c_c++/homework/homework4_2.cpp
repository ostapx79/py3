#include <iostream>
#include <cstdlib>

int main() {
    using namespace std;

    int value_a, value_b, value_c = 0;
    cout << "Введите первое значение => ";
    cin >> value_a;
    cout << "Введите второе значение => ";
    cin >> value_b;

    if (abs(value_a) > abs(value_b)) {
        swap(value_a, value_b);
    }
    for (int i = 0; i < abs(value_a); i++) {
        if ((value_a >= 0 && value_b >= 0) || (value_a < 0 && value_b < 0)) {
            value_c += abs(value_b);
        } else {
            value_c -= abs(value_b);
        }
    }
    cout << "Произведение двух чисел => " << value_c << endl;
    return 0;
}
