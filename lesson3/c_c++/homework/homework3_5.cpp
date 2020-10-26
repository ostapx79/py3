#include <iostream>

int main() {
    using namespace std;
    int months;

    cout << "Введите число месица => ";
    cin >> months;

    cout << "Название вермени года, ";
    switch (months) {
        case 1: cout << "зима." << endl;
                break;
        case 2: cout << "зима." << endl;
                break;
        case 3: cout << "весна." << endl;
                break;
        case 4: cout << "весна." << endl;
                break;
        case 5: cout << "весна." << endl;
                break;
        case 6: cout << "лето." << endl;
                break;
        case 7: cout << "лето." << endl;
                break;
        case 8: cout << "лето." << endl;
                break;
        case 9: cout << "осень." << endl;
                break;
        case 10: cout << "осень." << endl;
                 break;
        case 11: cout << "осень." << endl;
                 break;
        case 12: cout << "зима." << endl;
                 break;
        default: cout << "Токого номер месяца нет!" << endl;
    }

    return 0;
}
