//: lesson5/c_c++/homework/homework5_4.cpp
#include <iostream>

// Суть ясна как можно написать программу, но как пишу на Си, очень большая
// программа получается, вернемся обратно когда будем понимать символы в Си и
// Си++, и доделаем.

void romanNumerals(int numb_i) {
    if (numb_i > 0 and numb_i < 4) {
        if (numb_i == 1) {
            std::cout << "I\n";
        } else if (numb_i == 2) {
            std::cout << "II\n";
        } else {
            std::cout << "III\n";
        }
    }
}

int main() {
    int numb_n;
    std::cout << "Введите число -> ";
    std::cin >> numb_n;
    romanNumerals(numb_n);
    return 0;
}
