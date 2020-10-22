#include <stdio.h>

int main(){

    int first_numb, second_numb, max_numb;

    printf("Введите первое целое число => ");
    scanf("%d", &first_numb);
    printf("Введите второе целое число => ");
    scanf("%d", &second_numb);

    max_numb = first_numb;
    if (second_numb > first_numb){
        max_numb = second_numb;
    }

    printf("Максимальное из двух чисел => %d\n", max_numb);

    return 0;
}
