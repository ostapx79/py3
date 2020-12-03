//: lesson5/c_c++/homework/homework5_3.cpp
#include <iostream>

void numbRes(int numb) {
    int numb_i = 1;
    while (numb_i <= numb) {
        printf("numb res -> %d\n", numb_i);
        numb_i++;
    }
}

int main() {
    int numb_x;
    std::cout << "Введите число -> ";
    std::cin >> numb_x;
    numbRes(numb_x);
    return 0;
}
