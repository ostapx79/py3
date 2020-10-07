#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    printf("%d+%d=?\n", b, a); // 5+3=?
    printf("Z(%d)=F(%d)\n", a, b); // Z(5)=F(3)
    printf("a=%d; b=%d;\n", a, b); // a=5; b=3;
    printf("Ответ: (5;3)\n", a, b); // Ответ: (5;3)

    return 0;
}
