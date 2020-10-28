#include <iostream>

int main() {
    using namespace std;
    int person_s_age;

    cout << "Сколько тебе лет?" << endl;
    cout << "Введите свой возраст => ";
    cin >> person_s_age;

    if (person_s_age > 0 && person_s_age < 121) {
        if (person_s_age == 1 || person_s_age == 21 || person_s_age == 31 || person_s_age == 41 ||
            person_s_age == 51 || person_s_age == 61 || person_s_age == 71 || person_s_age == 81 ||
            person_s_age == 91 || person_s_age == 101) {
            cout << "Тебе " << person_s_age << " год.\n";
        } else if ((person_s_age > 1 && person_s_age < 5) || (person_s_age > 21 && person_s_age < 25)
            || (person_s_age > 31 && person_s_age < 35) || (person_s_age > 41 && person_s_age < 45)
            || (person_s_age > 51 && person_s_age < 55) || (person_s_age > 61 && person_s_age < 64)
            || (person_s_age > 71 && person_s_age < 75) || (person_s_age > 81 && person_s_age < 85)
            || (person_s_age > 91 && person_s_age < 95) || (person_s_age > 101 && person_s_age < 105)) {
            cout << "Тебе " << person_s_age << " года.\n";
        } else {
            cout << "Тебе " << person_s_age << " лет.\n";
        }
    } else {
        cout << "Ты должен быть мертв, или ты везунчик!!!!\n";
    }

    return 0;
}
