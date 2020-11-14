//: lesson3/c_c++/homework/homework3_10d.cpp
#include <iostream>

int main() {
    float x, y;
    std::cout << "Введите первую коокдинату => ";
    std::cin >> x;
    std::cout << "Введите вторую координату => ";
    std::cin >> y;

    if ((x+x) * (x+x) + y*y / 2 > 1 &&
            (x-x) * (x-x) + y*y / 2 < 1 && x >= 0) {
        std::cout << "попали в круг\n";
    } else {
        std::cout << "непопали в круг\n";
    }
    return 0;
}
