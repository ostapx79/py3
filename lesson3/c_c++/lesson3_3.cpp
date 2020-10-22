#include <iostream>

int main(){
    using namespace std;
    int first_value, second_value, third_value;

    cout << "first_value => ";
    cin >> first_value;
    cout << "second_value => ";
    cin >> second_value;

    if (first_value > second_value){
        third_value = first_value;
        first_value = second_value;
        second_value = third_value;
        cout << "if block, second_value => ";
        cout << second_value << endl;
    } else {
        third_value = second_value;
        second_value = first_value;
        first_value = third_value;
        cout << "else block, first_value => ";
        cout << first_value << endl;
    }

    return 0;
}
