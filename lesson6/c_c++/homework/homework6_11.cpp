// lesson6/c_c++/homework/homework6_11.cpp
#include <iostream>

int perfect_number(int numb) {
    int i;
    int res = 0;
    bool res_1;
    for (i = 1; i < numb; i++) {
        if (numb % i == 0) {
            res += i;
        }
        if (numb == res) {
            res_1 = true;
        } else {
            res_1 = false;
        }
    }
    return res_1;
}

int main() {
    int numb = 28;
    int result;
    result = perfect_number(numb);
    if (result){
        std::cout << "совершенное число -> " << numb << '\n';
    } else {
        std::cout << "несовершенное число -> " << numb << '\n';
    }
    return 0;
}
