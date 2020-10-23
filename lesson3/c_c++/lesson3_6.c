#include <stdio.h>

int main(){
    int person_s_age;

    printf("Сколько вам лет? ");
    scanf("%d", &person_s_age);

    if (person_s_age >= 25 && person_s_age <= 45){
        printf("Вы нам подходите.\n");
    } else {
        printf("Вы нам не подходите.\n");
    }

    return 0;
}
