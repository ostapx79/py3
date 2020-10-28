#include <iostream>

int main() {
    using namespace std;
    int months, day, result_day;
    int year = 366;

    cout << "Введите номер месяца и число дня и узнаете сколько осталось до Н.Г." << endl;
    cout << "Введите месяц => ";
    cin >> months;
    cout << "Введите число => ";
    cin >> day;

    if (months == 1) {
        if (day >= 1 && day < 32) {
            result_day = year - day;
            cout << "До нового года осталость, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные числа, от 1 до 31!" << endl;
        }
    } else if (months == 2) {
        int months_1 = 31;
        if (day >= 1 && day < 30) {
            result_day = year - (months_1 + day);
            cout << "До нового года осталось, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные числа, от 1 до 29!" << endl;
        }
    } else if (months == 3) {
        int months_2 = 60;
        if (day >= 1 && day < 32) {
            result_day = year - (months_2 + day);
            cout << "До нового года осталось, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные чесла, от 1 до 31!" << endl;
        }
    } else if (months == 4) {
        int months_3 = 91;
        if (day >= 1 && day < 31) {
            result_day = year - (months_3 + day);
            cout << "До нового года осталось, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные числа, от 1 до 30!" << endl;
        }
    } else if (months == 5) {
        int months_4 = 121;
        if (day > 0 && day < 32) {
            result_day = year - (months_4 + day);
            cout << "До нового года осталось, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные чиса, от 1 до 31!" << endl;
        }
    } else if (months == 6) {
        int months_5 = 152;
        if (day > 0 && day < 31) {
            result_day = year - (months_5 + day);
            cout << "До нового года осталось, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные числа, от 1 до 30!" << endl;
        }
    } else if (months == 7) {
        int months_6 = 182;
        if (day > 0 && day < 32) {
            result_day = year - (months_6 + day);
            cout << "До нового года осталось, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные числа, от 1 до 31!" << endl;
        }
    } else if (months == 8) {
        int months_7 = 213;
        if (day > 0 && day < 32) {
            result_day = year - (months_7 + day);
            cout << "До нового года осталось, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные числа, от 1 до 31!" << endl;
        }
    } else if (months == 9) {
        int months_8 = 244;
        if (day > 0 && day < 31) {
            result_day = year - (months_8 + day);
            cout << "До нового года осталось, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные числа, от 1 до 30!" << endl;
        }
    } else if (months == 10) {
        int months_9 = 274;
        if (day > 0 && day < 32) {
            result_day = year - (months_9 + day);
            cout << "До нового года осталось, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные числа, от 1 до 31!" << endl;
        }
    } else if (months == 11) {
        int months_10 = 305;
        if (day > 0 && day < 31) {
            result_day = year - (months_10 + day);
            cout << "До нового года осталось, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные числа, от 1 до 30!" << endl;
        }
    } else if (months == 12) {
        int months_11 = 335;
        if (day > 0 && day < 32) {
            result_day = year - (months_11 + day);
            cout << "До нового года осталось, ";
            cout << result_day << " дней." << endl;
        } else {
            cout << "Пожалуста введите правельные числа, от 1 до 31!" << endl;
        }
    } else {
        cout << "Месяца бывают только, от 1 до 12!" << endl;
    }

    return 0;
}
