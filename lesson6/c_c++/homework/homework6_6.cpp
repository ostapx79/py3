/*
 * lesson6/c_c++/homework/homework6_6.cpp
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

int pseudo_random_number(int first_numb, int second_numb) {
    srand(time(NULL));
    first_numb = 1 + rand() % 6;
    second_numb = 1 + rand() % 6;
    int result = first_numb + second_numb;
    return result;
}

int main(int argc, char* argv[]) {
    int first_shot;
    int second_throw;
    std::cout << pseudo_random_number(first_shot, second_throw);
    std::cout << '\n';
    return 0;
}
