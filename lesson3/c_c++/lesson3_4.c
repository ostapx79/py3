#include <stdio.h>

int main(){
    int person_s1_age, person_s2_age;

    printf("Какого возраста Андрей => ");
    scanf("%d", &person_s1_age);
    printf("Какого возраста Костя => ");
    scanf("%d", &person_s2_age);

    if (person_s1_age > person_s2_age){
        printf("Андрей взрослей чем Костя.\n");
    } else {
        if (person_s1_age < person_s2_age){
            printf("Костя взрослей чем Андрей.\n");
        } else {
            printf("Андрей и Костя одного возраста.\n");
        }
    }

    return 0;
}
