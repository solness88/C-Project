//
//  main.cpp
//  C++Week3-2
//
//  Created by Hirokazu Kobayashi on 2024/04/13.
//

#include <iostream>

int main() {
    char c = 0;
    std::cout << "Size of c is: " << sizeof(c) << std::endl;
    
    signed int i = 0;
    std::cout << "Size of i is: " << sizeof(i) << std::endl;

    float f = 0.0;
    std::cout << "Size of f is: " << sizeof(f) << std::endl;

    long double d = 0.0;
    std::cout << "Size of d is: " << sizeof(d) << std::endl;
    
    return 0;
}
