//: lesson5/c_c++/lesson5_3.cpp
#include <iostream>

void printSped(int numb_a, int numb_b) {
    std::cout << (numb_a + numb_b) / 2.;
}

int main() {
    int numb_x, numb_y;
    std::cout << "Введите натуральное число -> ";
    std::cin >> numb_x;
    std::cout << "Введите натуральное число -> ";
    std::cin >> numb_y;

    printSped(numb_x, numb_y);
    std::cout << '\n';
    return 0;
}
