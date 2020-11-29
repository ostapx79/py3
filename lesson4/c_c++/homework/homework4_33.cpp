//: lesson4/c_c++/homework/homework4_33.cpp
#include <iostream>

int main() {
    int first_value = 1, second_value;
    float division_result;
    std::cin >> second_value;

    division_result = first_value / (float)second_value;

    std::cout << first_value << '/' << second_value << '=' << division_result << '\n';
}
