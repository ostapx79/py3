//: lesson5/c_c++/homework/homework5_6.cpp
#include <iostream>

void numbHex(int numb_hex) {
    std::cout << std::hex << numb_hex << std::endl;
    // Добавляем std::uppercase, если хотим в верхнем регистре.
}

int main() {
    int numb_n;
    std::cout << "Введите число -> ";
    std::cin >> numb_n;
    numbHex(numb_n);
    return 0;
}
