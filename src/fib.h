//
// Created by alex on 19/02/17.
//

#ifndef FIBONACCI_FIB_H
#define FIBONACCI_FIB_H
#define FIB_VERSION_INFO "0.0.1"
#include <iostream>

namespace fibonacci {
    int fibonacci(int &number) {
        if (number >= 50) {
            std::cout << "fibonacci does not support numbers above 49." << std::endl;
            return 0;
        }
        int term1 = 0, term2 = 1, nextTerm = 0;

        std::cout << "Fibonacci Sequence for " << number << " is: ";

        for (int index = 1; index <= number; ++index) {
            if (index == 1) {
                std::cout << " " << term1;
                continue;
            }
            if (index == 2) {
                std::cout << term2 << " ";
                continue;
            }
            nextTerm = term1 + term2;
            term1 = term2;
            term2 = nextTerm;
            std::cout << nextTerm << " ";
        }
        std::cout << std::endl;
        return nextTerm;
    }
}

#endif //FIBONACCI_FIB_H
