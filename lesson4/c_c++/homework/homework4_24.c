//: lesson4/c_c++/homework/homework4_24.c
// Напишите программу, которая вводит с клавиатуры до тех пор пока, не будет
// выведено число ноль. В конце программы на экран выводится минимальное и
// максимальное из введенных чисел (не считая ноль).
# include <stdio.h>
# include <stdbool.h>

int main() {
    int numb_input_1;
    printf("Введите число => ");
    scanf("%d", &numb_input_1);
    bool flag = true;
    int numb_input_2;
    int numb_min, numb_max;
    while (numb_input_2 != 0) {

        scanf("%d", &numb_input_2);
        if (numb_input_2 == 0) {
            break;
        }
        if (numb_input_1 < numb_input_2 && numb_min > numb_input_2) {
            numb_min = numb_input_1;
            numb_min = numb_input_2;
            printf("numb_min => %d\n", numb_min);
            if (numb_input_2 < numb_min) {
                numb_min = numb_input_2;
                printf("min => %d\n", numb_min);
            }
//            if (numb_min < numb_input_2) {
//                numb_min = numb_input_1;
////                printf("numb_input_1 => %d\n", numb_input_1);
////                printf("numb_input_2 => %d\n", numb_input_2);
////                printf("numb_min => %d\n", numb_min);
//            } else {
//                numb_min = numb_input_2;
////                printf("numb_input_1 => %d\n", numb_input_1);
////                printf("numb_input_2 => %d\n", numb_input_2);
////                printf("numb_min => %d\n", numb_min);
//            }
//
//            if (numb_input_1 > numb_input_2) {
//                numb_max = numb_input_1;
//                if (numb_input_2 > numb_max) {
//                    numb_max = numb_input_2;
//                }
////                printf("numb_input_1 => %d\n", numb_input_1);
////                printf("numb_input_2 => %d\n", numb_input_2);
////                printf("numb_min => %d\n", numb_max);
//            } else {
//                numb_max = numb_input_2;
////                printf("numb_input_1 => %d\n", numb_input_1);
////                printf("numb_input_2 => %d\n", numb_input_2);
////                printf("numb_min => %d\n", numb_max);
//            }
//
        } else {
            numb_min = numb_input_2;
            printf("numb_foo => %d\n", numb_min);
        }
        printf("numb_min => %d\n", numb_min);
        printf("numb_max => %d\n", numb_max);
    }
    printf("numb_min => %d\n", numb_min);
    printf("numb_max => %d\n", numb_max);
    return 0;
}
