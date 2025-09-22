#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> vegetables;
std::string disliked = "brocolli";

int main() {
    for (std::string v; std::cin >> v;) {
        vegetables.push_back(v);
    }
    for (int i = 0; i < vegetables.size(); i++) {
        if (vegetables[i] != disliked) {
            std::cout << vegetables[i] << "\n";
        }
    }
}