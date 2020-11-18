//: lesson4/c_c++/homework/homework4_23.cpp
#include <iostream>
#include <cstdbool>

int main() {
    int numb_1;
    std::cout << "Введите число => ";
    std::cin >> numb_1;
    bool flag = true;
    while (flag) {
        int numb_2 = 0;
        std::cout << "Введите число => ";
        std::cin >> numb_2;
        numb_1 += numb_2;
        if (numb_2 == 0) {
            flag = false;
        }
    }
    std::cout << "numb_1 => " << numb_1 << '\n';
    return 0;
}
