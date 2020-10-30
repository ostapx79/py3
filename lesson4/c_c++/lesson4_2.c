#include <stdio.h>

int main() {
    int numb = 10;

    while (numb > 0) {
        printf("%d\n", numb);
        numb -= 1;
    }
    printf("%d\n", numb);

    return 0;
}
