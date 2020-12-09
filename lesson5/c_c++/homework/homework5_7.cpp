/*: lesson5/c_c++/homework/homework5_7.cpp */
#include <iostream>

void takesParameter(int numb_n) {
    int numb_i;
    for (numb_i = 0; numb_i < numb_n; ++numb_i) {
        std::cout << "-";
    }
}

int main(int argc, char* argv[]) {
    /* int numb = atoi(argv[1]); */
    int numb;
    std::cout << "Введите число -> ";
    std::cin >> numb;
    takesParameter(numb);
    std::cout << '\n';
    return 0;
}
