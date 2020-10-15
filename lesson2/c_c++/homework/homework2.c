#include <stdio.h>

int main()
{
    int inp_numb1, inp_numb2, inp_numb3, inp_numb4, res_int;
    float res_float;

    scanf("%d%d%d%d", &inp_numb1, &inp_numb2, &inp_numb3, &inp_numb4);

    res_int = inp_numb1 + inp_numb2 + inp_numb3;
    printf("%d\n", res_int);

    // scanf("%d%d%d", &inp_numb1, &inp_numb2, &inp_numb3);

    res_int = inp_numb1 * inp_numb2 * inp_numb3;
    printf("%d\n", res_int);

    // scanf("%d", &inp_numb1);
    // scanf("%d", &inp_numb2);
    // scanf("%d", &inp_numb3);
    // scanf("%d", &inp_numb4);

    res_float = (inp_numb1 + inp_numb2 + inp_numb3) / (float)inp_numb4;
    printf("%f\n", res_float);

    return 0;
}
