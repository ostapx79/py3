//: lesson5/c_c++/lesson5_2.cpp
// процедура с параметрами
#include <iostream>

void printBin(int numb_n) {
    int numb_k = 128;
    while (numb_k > 0) {
        std::cout << numb_n / numb_k;
        numb_n %= numb_k;
        numb_k /= 2;
    }
}

int main() {
    printBin(99);
    std::cout << '\n';
    return 0;
}
