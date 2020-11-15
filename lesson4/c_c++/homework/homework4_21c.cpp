//: lesson4/c_c++/homework/homework4_21c.cpp
// a         | 6365133
// b         | 11494962
// НОД(a, b) | 171
// шаги-1    | 29
// шаги-2    | 13
#include <iostream>

int main() {
    int numb1 = 6365133;
    int numb2 = 11494962;
    int count1 = 0;
    while (numb1 != numb2) {
        if (numb1 > numb2) {
            numb1 -= numb2;
        } else {
            numb2 -= numb1;
        }
        count1++;
    }
    std::cout << "numb1 => " << numb1 << std::endl;
    std::cout << "numb2 => " << numb2 << std::endl;
    std::cout << "coutn1 => " << count1 << std::endl;

    int numb3 = 6365133;
    int numb4 = 11494962;
    int count2 = 0;
    while (numb3 != 0 && numb4 != 0) {
        if (numb3 > numb4) {
            numb3 %= numb4;
        } else {
            numb4 %= numb3;
        }
        ++count2;
    }
    std::cout << "numb3 => " << numb3 << std::endl;
    std::cout << "numb4 => " << numb4 << std::endl;
    std::cout << "count2 => " << count2 << std::endl;
    return 0;
}
