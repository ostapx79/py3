/*
 * lesson6/c_c++/homework/homework6_4.cpp
 */
#include <iostream>

int greatestCommonFactor(int numb_x, int numb_y) {
    int numb_res = numb_x + numb_y;
    int count = 1;
    int res = 0;
    while (count <= numb_res) {
        if (numb_res % count == 0) {
            if (res < count) {
                res = count;
            }
        }
        count++;
    }
    return res;
}

int main(int argc, char** argv) {
    int numb1, numb2;
    std::cout << "Введите число -> ";
    std::cin >> numb1;
    std::cout << "Введите число -> ";
    std::cin >> numb2;
    int result = greatestCommonFactor(numb1, numb2);
    std::cout << "result -> " << result << '\n';
    return 0;
}
