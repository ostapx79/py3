//: lesson4/c_c++/homework/homework4_14.cpp
#include <iostream>

int main() {
    int numb;
    std::cout << "Введите натуральное число => ";
    std::cin >> numb;

    int numb_i, numb_j = 0;
    for (numb_i = 1; numb_i <= numb; numb_i++) {
        numb_j += numb_i;
        std::cout << "numb_j => " << numb_i << " => " << numb_j << std::endl;
    }
    std::cout << "Сумма введеного числа => " << numb_j << std::endl;
    return 0;
}
