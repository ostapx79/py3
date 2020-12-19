/*
 * lesson6/c_c++/homework/homework6_2.cpp
 */
#include <iostream>

int expertAssessment(int numb_n) {
    int numb_r = numb_n;
    int count = 1;
    while (count != 5) {
        std::cout << "Число эксперта -> ";
        std::cin >> numb_n;
        numb_r += numb_n;
        count++;
    }
    return numb_r;
}

int main(int argc, char** argv) {
    int numb_i;
    std::cout << "Число эксперта -> ";
    std::cin >> numb_i;
    int result = expertAssessment(numb_i);
    std::cout << "Набранные очки спортсмена -> " << result << '\n';
    return 0;
}
