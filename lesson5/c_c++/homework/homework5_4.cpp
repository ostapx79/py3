//: lesson5/c_c++/homework/homework5_4.cpp
#include <iostream>

// Суть ясна как можно написать программу, но как пишу на Си, очень большая
// программа получается, вернемся обратно когда будем понимать символы в Си и
// Си++, и доделаем.

void romanNumerals(int numb_i) {
    if (numb_i > 0 and numb_i < 4) {
        for (int i = 1; i <= numb_i; i++) {
            std::cout << "I";
        }
    } else if (numb_i > 5 and numb_i < 9) {
        numb_i -= 5;
        std::cout << "V";
        for (int i = 1; i <= numb_i; i++) {
            std::cout << "I";
        }
    } else if (numb_i == 4) {
        std::cout << "IV";
    } else if (numb_i == 5) {
        std::cout << "V";
    } else if (numb_i == 9) {
        std::cout << "IX";
    } else {
        std::cout << "X";
    }
}

int main() {
    int numb_n;
    std::cout << "Введите число -> ";
    std::cin >> numb_n;
    romanNumerals(numb_n);
    std::cout << '\n';
    return 0;
}
