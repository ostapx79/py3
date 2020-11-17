//: lesson4/c_c++/homework/homewor4_22.cpp
#include <iostream>

int main() {
    int numb_1;
    std::cout << "Введите число => ";
    std::cin >> numb_1;

    int count = 1;
    while (count != 10) {
        int numb_2;
        std::cout << "Введите число => ";
        std::cin >> numb_2;
        numb_1 += numb_2;
        count++;
    }
    std::cout << "sum_numb_1 => " << numb_1;
    std::cout << " count => " << count << '\n';
    return 0;
}
