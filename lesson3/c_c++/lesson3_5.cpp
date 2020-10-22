#include <iostream>

int main(){
    using namespace std;
    int person_s1_age, person_s2_age;

    cout << "person's age a ";
    cin >> person_s1_age;
    cout << "person's age b ";
    cin >> person_s2_age;

    if (person_s1_age > person_s2_age){
        cout << "person's age a " << endl;
    } else if (person_s1_age == person_s2_age){
        cout  << "person's age a == person's age" << endl;
    } else {
        cout << "person's age b" << endl;
    }

    return 0;
}
