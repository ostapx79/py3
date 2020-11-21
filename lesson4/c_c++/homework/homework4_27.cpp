//: lesson4/c_c++/homework/homwwork4_27.cpp
#include <iostream>

int main() {
    int numb;
    std::cout << "Введите число => ";
    std::cin >> numb;
    int numb_i = 1;
    while (numb_i <= numb) {
        std::cout << "Все цифры числа => " << numb_i << std::endl;
        ++numb_i;
    }
    return 0;
}
