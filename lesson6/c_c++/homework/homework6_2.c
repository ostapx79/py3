/*
 * lesson6/c_c++/homework/homework6_2.c
 * На соревнованиях выступление спортсмена оценивают пять экспертов. Каждый из
 * них выставляет оценку в балах (целое число). Для получения итоговой оценки
 * лучшая из худших из оценок экспертов отбрасывается, а для оставшихся трех
 * находится среднее арифметическое. Напишите функцию которая вводит пять оценок
 * экспертов и возвращает итоговую оценку выступления спортсмена.
 */
#include <stdio.h>

int expertAssessment(int numb_n) {
    int numb1 = numb_n;
    int count = 1;
    while (count != 5) {
        printf("Число эксперта -> ");
        scanf("%d", &numb_n);
        numb1 += numb_n;
        count++;
    }
    return numb1;
}

int main() {
    int numb_r;
    printf("Введите только целое натуральное число!\n");
    printf("Число эксперта -> ");
    scanf("%d", &numb_r);
    int result = expertAssessment(numb_r);
    printf("Общий результат спортсмена -> %d\n", result);
    return 0;
}
