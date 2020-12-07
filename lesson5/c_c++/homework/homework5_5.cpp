//: lesson5/c_c++/homework/homework5_5.cpp
#include <iostream>

void octalNumberSystem(int numb_oct) {
	int count_oct = numb_oct;
	int count_oct_i = 0;
	while ((count_oct /= 10) > 0) {
		count_oct_i++;
	}
	int numb_oct_r = 7 - count_oct_i;
	for (int i = 0; i < numb_oct_r; i++)
		std::cout << "0";
	std::cout << std::oct << numb_oct << std::endl;
    //while (numb_i) {
	//std::cout << numb_i % 8;
	//numb_i /= 8;
    //}
}

int main() {
    int numb_n;
    std::cout << "Введите число -> ";
    std::cin >> numb_n;
    octalNumberSystem(numb_n);
    std::cout << "\n";
    return 0;
}
