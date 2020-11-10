//: lesson4/c_c++/homework/homework4_15.cpp
#include <iostream>

int main() {
    int entered_numb;
    std::cout << "Введите натуральное число => ";
    std::cin >> entered_numb;

    if (entered_numb > 0 && entered_numb < 100) {
        int result1 = entered_numb % 10;
        int result2 = entered_numb / 10 % 10;
        if (result1 == result2) {
            std::cout << "Оба числа одинаковы." << std::endl;
        } else {
            std::cout << "Числа разные." << std::endl;
        }
    } else if (entered_numb > 100 && entered_numb < 1000) {
        int result1 = entered_numb / 10 % 10;
        int result2 = entered_numb / 100;
        if (result1 == result2) {
            std::cout << "Первые две цыфры одинаковые.\n";
        } else {
            std::cout << "Первые две цыфры неодинаковы.\n";
        }
    } else {
        int result1 = entered_numb / 100 % 10;
        int result2 = entered_numb / 1000;
        if (result1 == result2) {
            std::cout << "Первые две цыфры одинаковы.\n";
        } else {
            std::cout << "Первые две цыфры неоинаковы.\n";
        }
    }
    return 0;
}
