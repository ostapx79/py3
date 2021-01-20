// lesson6/c_c++/homework/homework6_12.cpp
#include <iostream>

bool is_prime(int numb) {
    int res_d = 2;
    while (res_d * res_d <= numb && numb % res_d != 0) {
        res_d++;
    }
    return (res_d * res_d > numb);
}

int hyper_simple(int numb_i) {
    int i = 1;
    int res, res_1;
    res = res_1 = 0;
    while (numb_i > i) {
        res = is_prime(numb_i);
        if (res == 1) {
            res_1 += res;
        }
        numb_i /= 10;
    }
    return res_1;
}

int main() {
    int numb = 1000;
    int i;
    for (i = 2; i < numb; i++) {
        int result = hyper_simple(i);
        if (result == 3) {
            std::cout << "hyper_simple -> " << i << std::endl;
        }
    }
    return 0;
}
