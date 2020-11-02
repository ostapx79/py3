#include <stdio.h>

int main() {
    int numb;
    
    for (numb = 2; numb < 100; numb++) {
        int32_t k_numb = 2;
        while (k_numb * k_numb <= numb && numb % k_numb != 0) {
            k_numb += 1;
        }
        if (k_numb * k_numb > numb) {
            printf("numb = %d\n", numb);
        }
        int32_t k_k_numb = k_numb;
        printf("k_k_numb = %d\n", k_k_numb);
    }
    return 0;
}
