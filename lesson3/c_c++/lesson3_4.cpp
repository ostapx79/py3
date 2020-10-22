#include <iostream>

int main(){
    using namespace std;
    int person_s1_age, person_s2_age;

    cout << "Сколько лет Андрею => ";
    cin >> person_s1_age;
    cout << "Сколько лет Косте => ";
    cin >> person_s2_age;
    
    if (person_s1_age > person_s2_age){
        cout << "Андрей взрослей чем Костя." << endl;
    } else {
        if (person_s1_age < person_s2_age){
            cout << "Костя взрослей чем Андрей." << endl;
        } else {
            cout << "Андрей и Костя одного года." << endl;
        }
    }

    return 0;
}
