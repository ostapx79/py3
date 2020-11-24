//: lesson4/c_c++/homework/homewor4_30.cpp
#include <iostream>

int main() {
    int numb_i, numb_j, numb_s;
    std::cout << "Введите число чтоб узнать является оно совершенным => ";
    std::cin >> numb_j;
    numb_s = 0;
    for (numb_i = 1; numb_i < numb_j; numb_i++) {
        if (numb_j % numb_i == 0) {
            numb_s += numb_i;
        }
    }
    if (numb_s == numb_j) {
        std::cout << "Совершенное число => " << numb_j << '\n';
    } else {
        std::cout << "Не совершенное число => " << numb_j << '\n';
    }
    return 0;
}
