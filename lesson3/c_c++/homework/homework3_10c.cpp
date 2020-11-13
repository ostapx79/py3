//: lesson3/c_c++/homework/homework3_10c.cpp
#include <iostream>

int main() {
    float x, y;
    std::cout << "Введите первую координату => ";
    std::cin >> x;
    std::cout << "Введите вторую координату => ";
    std::cin >> y;

    if (x <= 0 && y <= 0 && y <= -x) {
        std::cout << "попали.\n";
    } else {
        std::cout << "непопали.\n";
    }
    return 0;
}
