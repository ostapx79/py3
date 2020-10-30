#include <stdio.h>

int main() {

    int n, count;

    n = 1234;
    count = 0;

    while (n > 0) {
        printf("n %d => counta %d\n", n, count);
        n = n / 10;
        count++;
    }

    return 0;
}
