// lesson6/c_c++/homework/homework6_10.cpp
#include <iostream>

int friendly_numb(int numb_i) {
    int res = 0;
    int i = 1;
    while (i < numb_i) {
        if (numb_i % i == 0) {
            res += i;
        }
        i++;
    }
    return res;
}

void friendly_numbers(int numb_n) {
    int i, j;
    for (i = 1; i < numb_n; ++i) {
        int res_1 = friendly_numb(i);
        for (j = 1; j < i; ++j) {
            int res_2 = friendly_numb(j);

            if (res_1 == j && res_2 == i) {
                std::cout << "дружественные числа\n";
                std::cout << "res_1 -> "
                    << res_1 << " - res_2 -> "
                    << res_2 << std::endl;
            }
        }
    }
}

int main() {
    int numb;
    numb = 7000;
    std::cout << "Вычисляем дружественные числа от 1 до 7000!\n";

    friendly_numbers(numb);
    
    return 0;
}
