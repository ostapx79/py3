//: lesson4/c_c++/homework/homework4_24.cpp
#include <iostream>

int main() {
    int numb_max = 1;
    int numb_min = 100000;
    int numb_x;
    std::cout << "Введите число => ";
    std::cin >> numb_x;

    while (numb_x != 0) {
        if (numb_x > numb_max) {
            numb_min = numb_max;
            numb_max = numb_x;
        } else if (numb_x < numb_min) {
            numb_min = numb_x;
        }
        std::cout << "Введите число => ";
        std::cin >> numb_x;
    }
    std::cout << "numb_min => " << numb_min << '\n';
    std::cout << "numb_max => " << numb_max << '\n';
    return 0;
}
