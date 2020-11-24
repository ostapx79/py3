//: lesson4/c_c++/homework/homework4_29.cpp
#include <iostream>

int main() {
    int numb_n, numb_a;
    std::cout << "Для получение простого числа,\n";
    std::cout << "Введите первое натуральное число => ";
    std::cin >> numb_n;
    std::cout << "Введите второе натуральное число => ";
    std::cin >> numb_a;

    if (numb_n == 1) {
        numb_n++;
    }
    while (numb_n < numb_a) {
        int numb_k;
        for (numb_k = 2; numb_n % numb_k != 0; numb_k++);
        if (numb_k == numb_n) {
            std::cout << "простое число => " << numb_n << std::endl;
        }
        numb_n++;
    }
}
