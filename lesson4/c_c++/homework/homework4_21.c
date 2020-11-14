//: lesson4/c_c++/homework/homework4_21.c
// Добавте в решение двух предыдущих задач вычисление количество шагов цикла.
// Заполните таблицу (шаги-1, и шаги-2 означает количество шагов двух версии
// алгоритма Евклида):
//
// a         | 64168
// b         | 82678
// НОД(a, b) | 1234
// шаги-1    | 12
// шаги-2    | 4
#include <stdio.h>

int main() {
    int numb_a = 64168;
    int numb_b = 82678;

    int count = 0;
    while (numb_a != numb_b) {
        if (numb_a > numb_b) {
            numb_a -= numb_b;
        } else {
            numb_b -= numb_a;
        }
        ++count; 
    }
    printf("numb_a_end => %d\nnumb_b_end => %d\nшагии => %d\n", numb_a, numb_b, count);

    int numb_a1 = 64168;
    int numb_b1 = 82678;

    int count2 = 0;
    while (numb_a1 != 0 && numb_b1 != 0) {
        if (numb_a1 > numb_b1) {
            numb_a1 %= numb_b1;
        } else {
            numb_b1 %= numb_a1;
        }
        ++count2;
    }
    printf("numb_a1_end => %d\nnumb_b1_end => %d\nшаги_2 => %d\n", numb_a1, numb_b1, count2);
    return 0;
}
