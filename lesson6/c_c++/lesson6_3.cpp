/*
 * lesson6/c_c++/lesson6_3.cpp
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
    int numb = 12345;
    int numb_sum = sumDigits(numb);
    std::cout << numb_sum << '\n';

    int numb_z = 54321;
    int numb_m = 12345;
    int numb_y = sumDigits(numb_z) + sumDigits(numb_m);
    std::cout << numb_y << '\n';

    if (sumDigits(numb) % 2 == 0) {
        std::cout << "сумма цифр четная\n";
        std::cout << "сумма цифр равна " << sumDigits(numb) << '\n';
    } else {
        std::cout << "сумма цифр не четная\n";
    }
    return 0;
}
