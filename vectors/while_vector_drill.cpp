#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    double num, sum = 0;
    std::string unit = "";
    double min = 0;
    double max = 0;
    std::vector<double> nums;

    std::cout << "Enter a number followed by unit type (allowed units: cm, m, in, ft): ";
    while (std::cin >> num >> unit) {
        if (unit == "cm") {
            num *= 0.01;
        }
        else if (unit == "m") {
            num *= 1;
        }
        else if (unit == "in") {
            num *= 0.0254;
        }
        else if (unit == "ft") {
            num *= 0.3048;
        }
        else {
            std::cout << "Unit not implemented\n";
            return 1;
        }
        sum += num; // sum in meters after conversion
        if (min == 0) {
            min = num;
            max = num;
            std::cout << "Minumum so far:" << min << "m" << "\n";
            std::cout << "Maximum so far:" << max << "m" << "\n";
        }
        else if (num < min) {
            min = num;
            std::cout << "Minumum so far:" << min << "m" << "\n";
            std::cout << "Maximum so far:" << max << "m" << "\n";
        }
        else if (num > max) {
            max = num;
            std::cout << "Minumum so far:" << min << "m" << "\n";
            std::cout << "Maximum so far:" << max << "m" << "\n";
        }
        else {
            std::cout << "Minumum so far:" << min << "m" << "\n";
            std::cout << "Maximum so far:" << max << "m" << "\n";
        }
        nums.push_back(num); // push all values into the vector
        std::sort(nums.begin(), nums.end());
        for (double d : nums) {
            std::cout << d << "\n";
        }
    }
    return 0;
}