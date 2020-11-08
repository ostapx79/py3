//: c_c++/homework/homework.c
#include <stdio.h>
#include <math.h>

int main() {
    int count = 1;
    int numb_of_digits;
    int incoming_numb = 100;
    int numb_end = 10000;

    while (incoming_numb < numb_end) {
        numb_of_digits = incoming_numb;
        if (incoming_numb >= 100 && incoming_numb < 1000) {
            while ((numb_of_digits /= 10) > 0 && count <= 2) count++;
            int result1 = pow(incoming_numb % 10, count);
            int result2 = pow(incoming_numb / 10 % 10, count);
            int result3 = pow(incoming_numb / 100, count);
            int result4 = result1 + result2 + result3;
            if (result4 == incoming_numb) {
                printf("result number => %d\n", result4);
            }
        } else {
            while ((numb_of_digits /= 10) > 0 && count <= 3) count++;
            int result1 = pow(incoming_numb % 10, count);
            int result2 = pow(incoming_numb / 10 % 10, count);
            int result3 = pow(incoming_numb / 100 % 10, count);
            int result4 = pow(incoming_numb / 1000, count);
            int result5 = result1 + result2 + result3 + result4;
            if (result5 == incoming_numb) {
                printf("result number => %d\n", result5);
            }
        }
        incoming_numb++;
    }
    return 0;
}
