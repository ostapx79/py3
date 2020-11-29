//: lesson4/c_c++/homework/homework4_32.cpp
#include <iostream>

int main() {
    int numb_15 = 15;
    int numb_17 = 17;
    int numb_21 = 21;
    int numb_185 = 185;
    int count = 0;

    for (int numb_15i = 1; numb_15i < 11; ++numb_15i) {

        int numb_15r = numb_15i;
        numb_15r *= numb_15;
        int numb_result1 = numb_15r + numb_17;
        int numb_result2 = numb_15r + numb_17 + numb_21;
        
        if (numb_result1 == numb_185) {
            count++;
        } else {
            if (numb_result2 == numb_185) {
                count++;
            }
        }

        for (int numb_17i = 1; numb_17i < 11; ++numb_17i) {

            int numb_17r = numb_17i;
            numb_17r *= numb_17;
            int numb_result3 = numb_15r + numb_17r;

            if (numb_result3 == numb_185) {
                std::cout
                    << "result_3 => " << numb_15r
                    << " + " << numb_17r << " = " << numb_result3
                    << '\n';
                count++;
            }

            for (int numb_21i = 1; numb_21i < 11; ++numb_21i) {
                
                int numb_21r = numb_21i;
                numb_21r *= numb_21;
                int numb_result4 = numb_15r + numb_17r + numb_21r;
                
                if (numb_result4 == numb_185) {
                    std::cout
                        << "result_4 => " << numb_15r
                        << " + " << numb_17r << " + "
                        << numb_21r << " = " << numb_result4
                        << '\n';
                    count++;
                }
            }
        }
    }
    std::cout << "result count of numbers => " << count << '\n';
}
