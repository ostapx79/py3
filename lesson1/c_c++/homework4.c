#include <stdio.h>
#include <math.h>

int main()
{ 
    // Задача по д/з из python3 осуществеляется по С.
    // Сложные проценты.
    //
    // Пользователь вкладывает 100р под 5% годовых на один год,
    // задача такая, должны вычеслить сколько рублей будет после одново года
    // (вклад + проценты)

    int  m, p, y;
    double r, result;

    printf("Введите сумму вклада: ");
    scanf("%d", &m);
    printf("Введите сколько процентов, максимум 5 процентов: ");
    scanf("%d", &p);
    printf("Введите на сколько лет хотите сделать свой вклад: ");
    scanf("%d", &y);
 
    result = pow((1 + p / 100.), y);
    r = m * result;

    printf("Ваш вклад вместе с процентами состоваляет: %.2lfруб в год\n", r);

    return 0;
}
