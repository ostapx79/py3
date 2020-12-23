/*
 * lesson6/c_c++/homework/homework6_4a.cpp
 */
#include <iostream>

int greatestCommonFactor(int numb_1, int numb_2) {
    int count;
    int res1, res2, res3;
    res1 = res2 = res3 = 0;
    if (numb_1 > numb_2 || numb_1 < numb_2) {
        int numb_total = 0;
        if (numb_1 > numb_2) {
            numb_total = numb_1;
        } else {
            numb_total = numb_2;
        }
        for (count = 1; count < numb_total; count++) {
            if (numb_1 % count == 0 && numb_2 % count == 0) {
                if (res1 < count && res2 < count) {
                    res1 = count;
                    res2 = count;
                    if (res1 == res2) {
                        res3 = count;
                    }
                }
            }
        }
    }
    return res3;
}

int main(int argc, char* argv[]) {
    int first_value, second_value;
    std::cout << "Введите число -> ";
    std::cin >> first_value;
    std::cout << "Введите число -> ";
    std::cin >> second_value;

    int result = greatestCommonFactor(first_value, second_value);
    std::cout << "Greatest common factor -> " << result << '\n';
    return 0;
}
