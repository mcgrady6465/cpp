#include <iostream>

int main() {
    char ch;
    for (ch = '1'; ch <= 'z'; ch++) {
        std::cout << ch << " " << int(ch) << "\n";
    }
    return 0;

}