//: lesson4/c_c++/homework/homework4_12.cpp
#include <iostream>
#include <cmath>

int main() {
    using namespace std;
    int64_t numb;
    cout << "Введите натуральное число => ";
    cin >> numb;

    int64_t numb_i = 1;
    while (numb_i < numb) {
        int64_t numb_pow = numb_i * numb_i;
        if (numb_pow % 10 == numb_i) {
            cout << "Натуральное число в первую степень => " << numb_i << endl;
        } else if (numb_pow % 100 == numb_i) {
            cout << "Натуральное число в второй степень => " << numb_i << endl;
        } else if (numb_pow % 1000 == numb_i) {
            cout << "Натуральное число в третей степень => " << numb_i << endl;
        } else if (numb_pow % 10000 == numb_i) {
            cout << "Натуральное число в червертой степень => " << numb_i << endl;
        } else if (numb_pow % 100000 == numb_i) {
            cout << "Натуральное число в пятой степень => " << numb_i << endl;
        } else if (numb_pow % 1000000 == numb_i) {
            cout << "Натуральное число в шестой степень => " << numb_i << endl;
        } else if (numb_pow % 10000000 == numb_i) {
            cout << "Натуральное число в седьмой степень => " << numb_i << endl;
        } else if (numb_pow % 100000000 == numb_i) {
            cout << "Натуральное число в восьмой степень => " << numb_i << endl;
        } else if (numb_pow % 1000000000 == numb_i) {
            cout << "Натуральное число в девятой степень => " << numb_i << endl;
        } else {
            if (numb_pow % 10000000000 == numb_i) {
                cout << "Натуральные число в десятой степень => " << numb_i << endl;
            }
        }
        numb_i++;
    }
    return 0;
}
