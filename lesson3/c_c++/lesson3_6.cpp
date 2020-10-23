#include <iostream>

int main(){
    using namespace std;
    int person_s_age;
    cout << "Сколько вам лет? ";
    cin >> person_s_age;

    if (person_s_age >= 25 && person_s_age <= 45){
        cout << "Вы нам подходите." << endl;
    } else {
        cout << "Вы нам не подходите." << endl;
    }

    return 0;
}
