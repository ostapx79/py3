//: lesson4/c_c++/homework/homework4_20.cpp
#include <iostream>

int main() {
    int numb_a = 50;
    int numb_b = 180;

    while (numb_a != numb_b) {
        if (numb_a > numb_b) {
            numb_a -= numb_b;
            std::cout << "numb_a => " << numb_a << std::endl;
        } else {
            numb_b -= numb_a;
            std::cout << "numb_b => " << numb_b << std::endl;
        }
    }
    std::cout << "numb_a => " << numb_a << std::endl;
    return 0;
}
