/*
 * lesson6/c_c++/homework/homework6_3.cpp
 */
#include <iostream>

int amountDigitsNumber(int numb_n) {
    int count = 1;
    while ((numb_n /= 10) > 0) {
        count++;
    }
    return count;
}

int main(int argc, char* argv[]) {
    int numb;
    std::cout << "Введите число -> ";
    std::cin >> numb;
    std::cout << "number of digits a of number -> "
        << amountDigitsNumber(numb) << '\n';
    return 0;
}
