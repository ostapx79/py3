#include <stdio.h>

int main() {

    int person_s_age;

    printf("Какой у тебя возраст?\n");
    printf("Введи свой возрасте => ");
    scanf("%d", &person_s_age);

    if (person_s_age > 0 && person_s_age < 121) {
        if (person_s_age == 1 || person_s_age == 21 || person_s_age == 31 || person_s_age == 41 || person_s_age == 51 || person_s_age == 61 || person_s_age == 71 || person_s_age == 81 || person_s_age == 91 || person_s_age == 101) {
            printf("Тебе %d год.\n", person_s_age);
        } else if ((person_s_age > 1 && person_s_age < 5) || (person_s_age > 21 && person_s_age < 25) || (person_s_age > 31 && person_s_age < 35) || (person_s_age > 41 && person_s_age < 45) || (person_s_age > 51 && person_s_age < 55) || (person_s_age > 61 && person_s_age < 65) || (person_s_age > 71 && person_s_age < 75) || (person_s_age > 81 && person_s_age < 85) || (person_s_age > 91 && person_s_age < 95) || (person_s_age > 101 && person_s_age < 105)) {
            printf("Тебе %d года.\n", person_s_age);
        } else {
            printf("Тебе %d лет.\n", person_s_age);
        }
    } else {
        printf("Ты должен быть мертв, ксожелению!!!!\n");
    }

    return 0;
}
