#include <stdio.h>

int main() {
    int32_t numb;

    for (numb = 2; numb < 1000; numb++) {
        int32_t count = 0, k_numb;
        for (k_numb = 2; k_numb < numb; k_numb++) {
            if (numb % k_numb == 0) {
                count++;
            }
        }
        if (count == 0) {
            printf("numb = %d\n", numb);
        }
    }
    return 0;
}
