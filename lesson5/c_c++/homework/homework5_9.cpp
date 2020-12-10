/*
 * lesson5/c_c++/homework/homework5_9.cpp
 */
#include <iostream>

void personSAge(int numb_n) {
    if (numb_n == 1 || numb_n == 21 || numb_n == 31 || numb_n == 41 ||
        numb_n == 51 || numb_n == 61 || numb_n == 71 || numb_n == 81 ||
        numb_n == 91 || numb_n == 101) {
        std::cout << "Тебе " << numb_n << "год!\n";
    } else if ((numb_n > 1 && numb_n < 5) || (numb_n > 21 && numb_n < 25) ||
            (numb_n > 31 && numb_n < 35) || (numb_n > 41 && numb_n < 45) ||
            (numb_n > 51 && numb_n < 55) || (numb_n > 61 && numb_n < 65) ||
            (numb_n > 71 && numb_n < 75) || (numb_n > 81 && numb_n < 85) ||
            (numb_n > 91 && numb_n < 95)) {
        std::cout << "Тебе " << numb_n << "года!\n";
    } else {
        if ((numb_n > 4 && numb_n < 21) || (numb_n > 24 && numb_n < 31) ||
            (numb_n > 34 && numb_n < 41) || (numb_n > 44 && numb_n < 51) ||
            (numb_n > 54 && numb_n < 61) || (numb_n > 64 && numb_n < 71) ||
            (numb_n > 74 && numb_n < 81) || (numb_n > 84 && numb_n < 91) ||
            (numb_n > 94 && numb_n < 101)) {
            std::cout << "Тебе " << numb_n << "лет!\n";
        }
    }
}

int main() {
    int numb_age;
    std::cout << "Введи твой возраст -> ";
    std::cin >> numb_age;
    personSAge(numb_age);
    return 0;
}
