#include <iostream>

int main() {
    using namespace std;

    int three_digit;
    cout << "Введите целое число\n";
    cout << "Введеное число => ";
    cin >> three_digit;

    cout << "Введерное число является " << endl;
    if (three_digit >= 0 && three_digit <= 9) {
        cout << "одно-значное => " << three_digit << endl;
    } else if (three_digit > 9 && three_digit <= 99) {
        cout << "двух-значное => " << three_digit << endl;
    } else if (three_digit > 99 && three_digit <= 999) {
        cout << "трех-значное => " << three_digit << endl;
    } else {
        cout << "четырех-значное => " << three_digit << endl;
    }

    return 0;
}
