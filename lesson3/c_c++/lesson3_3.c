#include <stdio.h>

int main(){

    int first_value, second_value, third_value;

    printf("first_value => ");
    scanf("%d", &first_value);
    printf("second_value => ");
    scanf("%d", &second_value);

    if (first_value < second_value){
        third_value = second_value;
        second_value = first_value;
        first_value = third_value;
        printf("block if, first_value %d\n", first_value);
    } else {
        third_value = first_value;
        first_value = second_value;
        second_value = third_value;
        printf("block else, second_value %d\n", second_value);
    }

    return 0;
}
