//: lesson4/c_c++/homework/homework4_25.cpp
#include <iostream>

int main() {
    int numb;
    std::cout << "Введите натуральное число => ";
    std::cin >> numb;
    int fact = 1;
    for (int i = 1; i <= numb; i++) {
        fact *= i;
    }
    std::cout << "factorial => " << fact << '\n';
    return 0;
}
