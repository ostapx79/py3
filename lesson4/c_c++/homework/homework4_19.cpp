//: lesson4/c_c++/homework/homework4_19.cpp
#include <iostream>

int main() {
    int numb_a = 50, numb_b = 130;

    while (numb_a != 0 && numb_b != 0) {
        if (numb_a > numb_b) {
            numb_a %= numb_b;
            std::cout << "numb_a => " << numb_a << std::endl;
        } else {
            numb_b %= numb_a;
            std::cout << "numb_b => " << numb_b << std::endl;
        }
    }
    return 0;
}
