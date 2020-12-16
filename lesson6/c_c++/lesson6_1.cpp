/*
 * lesson6/c_c++/lesson6_1.cpp
 */
#include <iostream>

int sumDigits(int numb_n) {
    int sum = 0;
    while (numb_n != 0) {
        sum += numb_n % 10;
        numb_n /= 10;
    }
    return sum;
}

int main() {
    std::cout << sumDigits(12345) << '\n';
    return 0;
}
