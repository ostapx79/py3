//: lesson4/c_c++/homework/homework4_13.cpp
#include <iostream>

int main() {
    using namespace std;
    int numb;
    cout << "Введите натуральное число => ";
    cin >> numb;

    for (int numb_i = 1; numb_i <= numb; numb_i++) {
        if (numb_i % 2 == 0) {
            cout << "Четное натуральное число => " << numb_i << endl;
        } else {
            cout << "Нечетное натуральное число => " << numb_i << endl;
        }
    }

    char s_new_line = '\n';
    cout << s_new_line;

    int numb_j = 1;
    while (numb_j <= numb) {
        if (numb_j % 2 == 1) {
            cout << "Нечетное натуральное число => " << numb_j << endl;
        } else {
            cout << "Четное натуральное число => " << numb_j << endl;
        }
        numb_j++;
    }
    return 0;
}
