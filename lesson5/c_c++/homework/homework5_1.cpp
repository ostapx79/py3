//: lesson5/c_c++/homework/homework5_1.cpp
#include <iostream>

void numberingValue(int numb_n) {
    while (numb_n > 0) {
        std::cout << "numbering value -> " << numb_n << '\n';
        numb_n--;
    }
}

void numbVal(int numb_n) {
    for (; numb_n > 0; numb_n--) {
        std::cout << "numb value -> " << numb_n << '\n';
    }
}

int main() {
    int numb;
    std::cout << "Введите число -> ";
    std::cin >> numb;
    std::cout << '\n';
    numberingValue(numb);
    std::cout << '\n';
    numbVal(numb);
    return 0;
}
