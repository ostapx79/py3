/*
 * lesson5/c_c++/homework/homework5_10.cpp
 */

#include <iostream>

void numberInWords(int numb_n) {
    switch (numb_n) {
    case 1: std::cout << "один!\n";
	break;
    case 2: std::cout << "два!\n";
	break;
    case 3: std::cout << "три!\n";
	break;
    case 4: std::cout << "четыре!\n";
	break;
    case 5: std::cout << "пять!\n";
	break;
    case 6: std::cout << "шесть!\n";
	break;
    case 7: std::cout << "семь!\n";
	break;
    case 8: std::cout << "восемь!\n";
	break;
    case 9: std::cout << "девять!\n";
	break;
    case 10: std::cout << "десять!\n";
	break;
    case 11: std::cout << "одиннадцать!\n";
	break;
    case 12: std::cout << "двенадцать!\n";
	break;
    case 13: std::cout << "тринадцать!\n";
	break;
    case 14: std::cout << "четырнадцать!\n";
	break;
    case 15: std::cout << "пятнадцать!\n";
	break;
    case 16: std::cout << "шестнадцать!\n";
	break;
    case 17: std::cout << "семнадцать!\n";
	break;
    case 18: std::cout << "восемнадцать!\n";
	break;
    case 19: std::cout << "девятнадцать!\n";
	break;
    case 20: std::cout << "двадцать!\n";
	break;
    case 21: std::cout << "двадцать один!\n";
	break;
    case 22: std::cout << "двадцать два!\n";
	break;
    case 23: std::cout << "двадцать три!\n";
	break;
    case 24: std::cout << "двадцать четыре!\n";
	break;
    case 25: std::cout << "двадцать пять!\n";
	break;
    case 26: std::cout << "двадцать шесть!\n";
	break;
    case 27: std::cout << "двадцать семь!\n";
	break;
    case 28: std::cout << "двадцать восемь!\n";
	break;
    case 29: std::cout << "двадцать девять!\n";
	break;
    case 30: std::cout << "тридцать!\n";
	break;
    default: std::cout << "no such number!\n";
    }
}

int main() {
    int numb_i;
    std::cout << "Введите число -> ";
    std::cin >> numb_i;
    numberIfWords(numb_i);
    return 0;
}
