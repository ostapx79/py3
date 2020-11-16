//: lesson4/c_c++/homework/homework4_21e.cpp
// a         | 17905514
// b         | 23108855
// НОД(a, b) | 3421
// шаги-1    | 56
// шаги-2    | 8
#include <iostream>

int main() {
    int numb_1 = 17905514;
    int numb_2 = 23108855;
    int count_1 = 0;

    while (numb_1 != numb_2) {
        if (numb_1 > numb_2) {
            numb_1 -= numb_2;
        } else {
            numb_2 -= numb_1;
        }
        ++count_1;
    }
    std::cout << "numb_1 => " << numb_1 << '\n';
    std::cout << "numb_2 => " << numb_2 << '\n';
    std::cout << "count_1 => " << count_1 << '\n';

    int numb_3 = 17905514;
    int numb_4 = 23108855;
    int count_2 =0;

    while (numb_3 != 0 && numb_4 != 0) {
        if (numb_3 > numb_4) {
            numb_3 %= numb_4;
        } else {
            numb_4 %= numb_3;
        }
        count_2++;
    }
    std::cout << "numb_3 => " << numb_3 << '\n';
    std::cout << "numb_4 => " << numb_4 << '\n';
    std::cout << "count_2 => " << count_2 << '\n';
    return 0;
}
