#include <iostream>

int main() {
    using namespace std;

    int months;
    cout << "Введите номер месяца => ";
    cin >> months;

    if (months == 1) {
        cout << "January" << endl;
    } else if (months == 2) {
        cout << "February" << endl;
    } else if (months == 3) {
        cout << "March" << endl;
    } else if (months == 4) {
        cout << "April" << endl;
    } else if (months == 5) {
        cout << "May" << endl;
    } else if (months == 6) {
        cout << "June" << endl;
    } else if (months == 7) {
        cout << "Jule" << endl;
    } else if (months == 8) {
        cout << "August" << endl;
    } else if (months == 9) {
        cout << "September" << endl;
    } else if (months == 10) {
        cout << "Octomber" << endl;
    } else if (months == 11) {
        cout << "November" << endl;
    } else if (months == 12) {
        cout << "December" << endl;
    } else {
        cout << "Not this months!" << endl;
    }

    return 0;
}
