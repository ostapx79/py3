#include <iostream>

int main() {
    using namespace std;
    int numb_1, numb_2;
    cout << "Введите натуральное число!\n";
    cout << "Введтие первое число => ";
    cin >> numb_1;
    cout << "Введите второе число => ";
    cin >> numb_2;

    if (numb_1 < numb_2) {
        while (numb_1 <= numb_2) {
            int result = numb_1 * numb_1;
            cout << "result => " << numb_1 << '*' << numb_1 << '=' << result << endl;
            numb_1++;
        }
    } else {
        while (numb_1 >= numb_2) {
            int result = numb_1 * numb_1;
            cout << "result => " << numb_1 << '*' << numb_1 << '=' << result << endl;
            numb_1--;
        }
    }
    return 0;
}
