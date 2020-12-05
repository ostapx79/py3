//: lesson5/c_c++/homework/homework5_5.cpp
#include <iostream>

void octalNumberSystem(int numb_i) {
    while (numb_i) {
	std::cout << numb_i % 8;
	numb_i /= 8;
    }
}

int main() {
    int numb_n;
    std::cout << "Введите число -> ";
    std::cin >> numb_n;
    octalNumberSystem(numb_n);
    std::cout << "\n";
    return 0;
}
