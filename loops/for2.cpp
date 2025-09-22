#include <iostream>

int square(int x) {
    int result = 0;
    for (int i = 0; i < x; ++i) {
        result += x;
    }
    return result;
}

int main() {
    std::cout << square(7) << "\n";
    return 0;
}