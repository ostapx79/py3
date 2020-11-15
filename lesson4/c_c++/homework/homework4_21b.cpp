//: lesson4/c_c++/homework/homework4_21b.cpp
// a         | 358853
// b         | 691042
// НОД(a, b) | 1111
// шаги-1    | 22
// шаги-2    | 6
#include <iostream>

int main() {
    int numb1 = 358853;
    int numb2 = 691042;

    int count1 = 0;
    while (numb1 != numb2) {
        if (numb1 > numb2) {
            numb1 -= numb2;
        } else {
            numb2 -= numb1;
        }
        ++count1;
    }
    std::cout << "numb1 => " << numb1 << std::endl;
    std::cout << "numb2 => " << numb2 << std::endl;
    std::cout << "coun51 => " << count1 << std::endl;

    int numb3 = 358853;
    int numb4 = 691042;

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
