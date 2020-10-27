#include <stdio.h>

int main() {
    int months;
    scanf("%d", &months);

    if ((months >= 1 && months < 9) && months % 2 != 0) {
        printf("31\n");
    } else if ((months >= 8 && months < 13) && months % 2 == 0) {
        printf("31\n");
    } else if (months == 2) {
        printf("29\n");
    } else if ((months >= 4 && months < 8) && months % 2 == 0) {
        printf("30\n");
    } else if ((months >= 9 && months < 12) && months % 2 != 0) {
        printf("30\n");
    } else {
        printf("Not this months!\n");
    }
    
    return 0;
}
