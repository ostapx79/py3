//: lesson3/c_c++/homework/homework3_10b.cpp
#include <iostream>
#include <cmath>

int main() {
    float x, y;
    std::cout << "Введите первую кординату => ";
    std::cin >> x;
    std::cout << "Введите вторую кординату => ";
    std::cin >> y;

    if (x*x + y*y / 2 <= 1 && x*x + y*y / 2 >= -1) {
        std::cout << "попали.\n";
    } else {
        std::cout << "непопали.\n";
    }
    return 0;
}
