/*
 * :lesson6/c_c++/homework/homework6_1.cpp third 
 */
#include <iostream>

int maxValue(int first_value, int second_value, int third_value) {
    if (first_value > second_value and first_value > third_value) {
        return first_value;
    } else if (second_value > third_value and second_value > first_value) {
        return second_value;
    } else {
        return third_value;
    }
}

int main() {
    int numb_1, numb_2, numb_3;
    std::cout << "Введите три числа -> ";
    std::cin >> numb_1;
    std::cin >> numb_2;
    std::cin >> numb_3;
    std::cout << "Максимальное число -> " <<  maxValue(numb_1, numb_2, numb_3) << '\n';
    return 0;
}
