//: lesson4/c_c++/homework/homework4_17.cpp
#include <iostream>

int main() {
    int entered_numb;
    std::cout << "Введите натуральное трехзначное или четырехзначиное число => ";
    std::cin >> entered_numb;

    if (entered_numb > 100 && entered_numb < 1000) {
        int result1 = entered_numb % 10;
        int result2 = entered_numb / 10 % 10;
        int result3 = entered_numb / 100;
        if (result1 == result3) {
            std::cout << "В число етсь две одинаковые цыфры.\n";
        } else if (result1 == result2) {
            std::cout << "В число етсь две одинаковые цыфры.\n";
        } else if ( result2 == result3) {
            std::cout << "В число етсь две одинаковые цыфры.\n";
        } else {
            std::cout << "В число нет две одинаковые цыфры.\n";
        }
    } else if (entered_numb > 1000 && entered_numb < 10000) {
        int result1 = entered_numb % 10;
        int result2 = entered_numb / 10 % 10;
        int result3 = entered_numb / 100 % 10;
        int result4 = entered_numb / 1000;
        if (result1 == result4) {
            std::cout << "В число етсь две одинаковые цыфры.\n";
        } else if (result2 == result3) {
            std::cout << "В число етсь две одинаковые цыфры.\n";
        } else if (result1 == result2) {
            std::cout << "В число етсь две одинаковые цыфры.\n";
        } else if (result3 == result4) {
            std::cout << "В число етсь две одинаковые цыфры.\n";
        } else {
            std::cout << "В число нет две одиноковые цыфры.\n";
        }
    } else {
        std::cout << "Прочитаете лучше зоголовок!\n";
    }
    return 0;
}
