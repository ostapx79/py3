#include <stdio.h>
#include <math.h>

int main()
{
    // Напишите программу, которая возводит введеное число в степень 10. Что
    // произойдет если ввести большое чимсло: например 78? Что произошло?
    int numb1, numb2;
    scanf("%d", &numb1);

    numb2 = pow(numb1, 10);

    printf("%d\n", numb2);

    // Если ввести число 78, будет не тот результат которого мы ожидали. Число
    // будет меньше чем мы ожидали. Предпологается что не входит диапозон типа
    // данных и выдоет то что входит в этом дяпозоне. Говорят еще переополнение.

    return 0;
}