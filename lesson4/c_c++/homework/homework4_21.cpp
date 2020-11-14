//: lesson4/c_c++/homework/homework4_21.cpp
// a         | 64168
// b         | 82678
// НОД(a, b) | 1234
// шаги-1    | 12
// шаги-1    | 4
#include <iostream>

int main() {
    int numb1 = 64168;
    int numb2 = 82678;

    int count1 = 0;
    while (numb1 != numb2) {
        if (numb1 > numb2) {
            numb1 = numb1 - numb2;
        } else {
            numb2 = numb2 - numb1;
        }
        ++count1;
    }
    std::cout << "numb1_end => " << numb1 << std::endl;
    std::cout << "numb2_end => " << numb2 << std::endl;
    std::cout << "count1 => " << count1 << std::endl;

    int numb3 = 64168;
    int numb4 = 82678;

    int count2 = 0;
    while (numb3 != 0 && numb4 != 0) {
        if (numb3 > numb4) {
            numb3 %= numb4;
        } else {
            numb4 %= numb3;
        }
        ++count2;
    }
    std::cout << "numb3_end => " << numb3 << std::endl;
    std::cout << "numb4_end => " << numb4 << std::endl;
    std::cout << "count2 => " << count2 << std::endl;
}
