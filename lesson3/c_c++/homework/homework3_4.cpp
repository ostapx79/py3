#include <iostream>

int main() {
    using namespace std;
    int months;
    cout << "Введите число месица => ";
    cin >> months;

    cout << "Значение года, ";
    if ((months >= 1 && months < 3) || months == 12) {
        cout << "зима." << endl;
    } else if (months >= 3 && months < 6) {
        cout << "весна." << endl;
    } else if (months >= 6 && months < 9) {
        cout << "лето." << endl;
    } else if (months >= 9 && months < 12) {
        cout << "осень." << endl;
    } else {
        cout << "Такого месяца не бывает!" << endl;
    }

    return 0;
}
