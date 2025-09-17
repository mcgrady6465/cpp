#include <iostream>

/**
 * Tests if an unsafe conversion from int to char and back to int
 * will result in data loss.
 * 
 * @return 0 if the conversion is safe, 1 if it is not.
 */
int main() {
    int a = 200000;
    char c = a;
    int b = c;
    if (a != b) {
        std::cout << "Oops" << a << "!=" << b << "\n";
        return 1;
    }
    return 0;
}
