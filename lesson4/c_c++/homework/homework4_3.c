#include <stdio.h>

int main() {
    // Напишите программу, которая вводит натуральное число N, и находит сумму
    // всех натуральных чисел от 1 до N. Используйте сначало цикл с условием а
    // потом цыкл с перемерной.
    
    int numb, result = 0;
    printf("Введите натуральное число => ");
    scanf("%d", &numb);

    int numb_u = 1;
    while ( numb_u <= numb) {
        result += numb_u;
        numb_u += 1;

    }
    printf("Сумма натуральных чисел => %d\n", result);
    return 0;
}
