//: lesson4/c_c++/homework/homework4_21d.cpp
// a         | 549868978
// b         | 298294835
// НОД(a, b) | 17
// шаги-1    | 265
// шаги-2    | 14
#include <iostream>

int main() {
    int numb_1 = 549868978;
    int numb_2 = 298294835;
    int count_1 = 0;
    while (numb_1 != numb_2) {
        if (numb_1 > numb_2) {
            numb_1 -= numb_2;
        } else {
            numb_2 -= numb_1;
        }
        count_1++;
    }
    std::cout << "numb_1 => " << numb_1 << '\n';
    std::cout << "numb_2 => " << numb_2 << '\n';
    std::cout << "count_1 => " << count_1 << '\n';

    int numb_3 = 549868978;
    int numb_4 = 298294835;
    int count_2 = 0;
    while (numb_3 != 0 && numb_4 != 0) {
        if (numb_3 > numb_4) {
            numb_3 %= numb_4;
        } else {
            numb_4 %= numb_3;
        }
        ++count_2;
    }
    std::cout << "numb_3 => " << numb_3 << '\n';
    std::cout << "numb_4 => " << numb_4 << '\n';
    std::cout << "count_2 => " << count_2 << '\n';
    return 0;
}
