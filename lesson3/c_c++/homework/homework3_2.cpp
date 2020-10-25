#include <iostream>

int main() {
    using namespace std;
    int value_a, value_b, value_c, value_d, value_e;

    cout << "Введите пять случайных чисел, что-бы узнать масимальное и минимальное число\n";
    cout << "value_a => ";
    cin >> value_a;
    cout << "value_b => ";
    cin >> value_b;
    cout << "value_c => ";
    cin >> value_c;
    cout << "value_d => ";
    cin >> value_d;
    cout << "value_e => ";
    cin >> value_e;

    cout << "Максимальное значение" << endl;
    if (value_a > value_b && value_a > value_c) {
        cout << "value_a => " << value_a << endl;
    } else if (value_b > value_c && value_b > value_d) {
        cout << "value_b => " << value_b << endl;
    } else if (value_c > value_d && value_c > value_e) {
        cout << "value_c => " << value_c << endl;
    } else if (value_d > value_e && value_d > value_a) {
        cout << "value_d => " << value_d << endl;
    } else {
        cout << "value_e => " << value_e << endl;
    }

    cout << "Минимальное значение" << endl;
    if (value_a < value_b && value_a < value_c) {
        cout << "value_a => " << value_a << endl;
    } else if (value_b < value_c && value_b < value_d) {
        cout << "value_b => " << value_b << endl;
    } else if (value_c < value_d && value_c < value_e) {
        cout << "value_c => " << value_c << endl;
    } else if (value_d < value_e && value_d < value_a) {
        cout << "value_d => " << value_d << endl;
    } else {
        cout << "value_e => " << value_e << endl;
    }

    return 0;
}
