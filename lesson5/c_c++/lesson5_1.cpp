//: lesson5/c_c++/lesson5_1.cpp
#include <iostream>

void Error() {
    std::cout << "ОШИБКА! Число должно быть больше чем ноль!\n";
}

void CorrectAnswer() {
    std::cout << "ПРАВИЛЬНО! Число больше чем ноль!\n";
}

int main() {
    int value_numb;
    std::cout << "Введите натуральное число больше чем ноль => ";
    std::cin >> value_numb;

    if (value_numb < 0) {
        Error();
    } else {
        CorrectAnswer();
    }
    return 0;
}
