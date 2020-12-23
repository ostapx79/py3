/*
 * lesson6/c_c++/homework/homework6_4a.c
 */

#include <stdio.h>

int greatestCommonFactor(int numb_1, int numb_2) {
    int count = 1;
    int res1, res2, res3;
    res1 = res2 = res3 = 0;
    if (numb_1 > numb_2 || numb_1 < numb_2) {
        while (count < numb_1) {
            if (numb_1 % count == 0 && numb_2 % count == 0) {
                if (res1 < count && res2 < count) {
                    res1 = count;
                    res2 = count;
                    if (res1 == res2) {
                        res3 = count;
                    }
                }
            }
            count++;
        }
    }
    return res3;
}

int main(int argc, char* argv[]) {
    int first_value, second_value;
    printf("Введите число -> ");
    scanf("%d", &first_value);
    printf("Введите число -> ");
    scanf("%d", &second_value);

    int result = greatestCommonFactor(first_value, second_value);
    printf("Greatest common factor -> %d\n", result);
    return 0;
}
