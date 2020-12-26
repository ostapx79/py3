#include <stdio.h>

int main()
{
    int a = 5, b = 3;

    printf("%d=ZXF(%d)\n", a, b); // результатом будет 5=Z(3)
    printf("Z(a)=(b)\n"); // результатом будет Z(a)=(b)
    printf("Z(%d)=(%d)\n", a, a+b); // результатом будет Z(5)=(8)

    return 0;
}
