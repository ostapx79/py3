/* 
 * lesson5/c_c++/homework/homework5_8.cpp
 */

#include <iostream>

void squareOfStars(int numb_n) {
    int numb_i;
    for (numb_i = 0; numb_i < numb_n; numb_i++) {
        int numb_j;
        for (numb_j = 0; numb_j < numb_n; numb_j++) {
            std::cout << "* ";
        }
        std::cout << '\n';
    }
}

int main() {
    int numb_stars;
    std::cout << "Введите число -> ";
    std::cin >> numb_stars;
    squareOfStars(numb_stars);
    return 0;
}
