//: lesson4/c_c++/homework/homework4_18.cpp
#include <iostream>
#include <cmath>

int main() {
    int numb_p1 = pow(2, 10);
    int numb_p2 = pow(2, 2);
    while (numb_p1 >= numb_p2) {
        if (numb_p1 % 2 == 0) {
            std::cout << "Четное число => " << numb_p1 << std::endl;
        } else {
            std::cout << "Нечетное число => " << numb_p1 << std::endl;
        }
        numb_p1--;
    }

    int numb_i = pow(2, 2);
    for (int numb = pow(2, 10); numb > numb_i - 1; numb--) {
        if (numb % 2 == 0) {
            std::cout << "Четное число => " << numb << std::endl;
        } else {
            std::cout << "Нечетное число => " << numb << std::endl;
        }
    }
    return 0;
}
