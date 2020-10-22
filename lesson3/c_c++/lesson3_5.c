#include <stdio.h>

int main(){
    int person_s1_age, person_s2_age;

    printf("person's age a ");
    scanf("%d", &person_s1_age);
    printf("person's age b ");
    scanf("%d", &person_s2_age);

    if (person_s1_age > person_s2_age){
        printf("person's age a \n");
    } else if (person_s1_age == person_s2_age){
        printf("person's age a == person's age b \n");
    } else {
        printf("person's age b \n");
    }

    return 0;
}
