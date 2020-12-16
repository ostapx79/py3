/*
 * lesson6/c_c++/lesson6_2.cpp
 */
#include <iostream>

int sumDigits(int numb_n) {
    int sum_numb = 0;
    while (numb_n != 0) {
        sum_numb += numb_n % 10;
        numb_n /= 10;
    }
    return sum_numb;
}

int main() {
    int numb_x = 12345;
    int numb_y = 2 * sumDigits(numb_x + 5);
    std::cout << numb_y << '\n';
    return 0;
}
