#include <stdio.h>

int main(){

    int first_numb, second_numb;

    scanf("%d", &first_numb);
    scanf("%d", &second_numb);

    if (first_numb > second_numb){
        printf("%d\n", first_numb);
    } else {
        printf("%d\n", second_numb);
    }

    return 0;
}
