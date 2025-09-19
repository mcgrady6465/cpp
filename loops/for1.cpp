#include <iostream>

int main() {
    char ch;
    for (ch = '1'; ch <= 'z'; ch++) {
        std::cout << ch << " " << int(ch) << "\n";
    }
    char upper = '1';
    std::cout << upper << " " << int(upper) << "\n";
    return 0;

}