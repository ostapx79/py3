#include <stdio.h>

int main()
{
    // Напишите программу, которая находит сумму, произведение и среднее
    // арифметическое трех целых чисел, введенных с клавиатуры. Например, при
    // вводе чисел 4, 5 и 7 мы должны получить ответ, 4+5+7=16, 4*5*7=140,
    // (4+5+7)/3=5.333333.

    int inp_numb1, inp_numb2, inp_numb3, inp_numb4, res_int;
    inp_numb4 = 3;
    float res_float;

    scanf("%d%d%d", &inp_numb1, &inp_numb2, &inp_numb3);

    res_int = inp_numb1 + inp_numb2 + inp_numb3;
    printf("%d+%d+%d=%d\n", inp_numb1, inp_numb2, inp_numb3, res_int);

    res_int = inp_numb1 * inp_numb2 * inp_numb3;
    printf("%d+%d+%d=%d\n", inp_numb1, inp_numb2, inp_numb3, res_int);

    res_float = (inp_numb1 + inp_numb2 + inp_numb3) / (float)inp_numb4;
    printf("(%d+%d+%d)/%d=%f\n", inp_numb1, inp_numb2, inp_numb3, inp_numb4, res_float);

    return 0;
}
