//: lesson4/c_c++/homework/homework4_26.cpp
#include <iostream>
#include <cmath>

int main() {
    int numb_a, numb_n;
    std::cout << "Если хотите узнать результата numb_a^numb_n!\n";
    std::cout << "Введите натуральное число => ";
    std::cin >> numb_a;
    std::cout << "Введите натуральное число => ";
    std::cin >> numb_n;

    std::cout << "numb_a ^ numb_n => " << pow(numb_a, numb_n) << '\n';
    return 0;
}
