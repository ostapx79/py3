#include <iostream>

int main() {
    using namespace std;
    int months;

    cout << "Введите номер месяца => ";
    cin >> months;

    cout << "В этом месяце, ";
    if ((months >= 1 && months < 9) && months % 2 != 0) {
        cout << "тридцать один день." << endl;
    } else if ((months >= 8 && months < 13) && months % 2 == 0) {
        cout << "тридцать один день." << endl;
    } else if (months == 2) {
        cout << "двадцать девять дней." << endl;
    } else if ((months >= 4 && months < 9) && months % 2 == 0) {
        cout << "тридцать дней." << endl;
    } else if ((months >= 9 && months < 12) && months % 2 != 0) {
        cout << "тридцать дней." << endl;
    } else {
        cout << "Номер токого месяца нет!" << endl;
    }

    return 0;
}
