#include <iostream>


int main() {
    double d = 0;
    while (std::cin >> d) {
        int i = d;
        char c = i;
        int i2 = c;
        std::cout << "d: " << d << std::endl; // Original double d
        std::cout << "i: " << i << std::endl; // d converted to int
        std::cout << "c: " << c << std::endl; // int squezzed to char
        std::cout << "i2: " << i2  << std::endl; // char converted to int
    }
    return 0;
}