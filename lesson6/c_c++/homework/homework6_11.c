/* lesson6/c_c++/homework/homework6_11.c
 * Напишите логическую функцию, которая определяет, верное ли, что число - N
 * совершенное, то есть равно сумме своих делителей, меньше его самого.
 */
#include <stdio.h>
#include <stdbool.h>

bool perfect_number(int numb) {
    int i;
    int res = 0;
    bool res_1;
    for (i = 1; i < numb; ++i) {
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
    int numb_n = 28;
    int result = perfect_number(numb_n);
    if (result == 1) {
        printf("совершенное число -> %d\n", numb_n);
    } else {
        printf("несовершенное число -> %d\n", numb_n);
    }
    return 0;
}
