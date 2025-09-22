#include <iostream>
#include <vector>

std::vector<double> temperatures;

/**
 * @brief Calculates the average temperature of the input temperatures.
 *
 * This function reads input temperatures from stdin and stores them in a
 * vector. It then calculates the average of the temperatures in the
 * vector and prints it to stdout.
 *
 * @return 0 on success
 */
int main() {
    for (double temp; std::cin >> temp;) {
        temperatures.push_back(temp);
    }
    // do something with temperatures
    double sum = 0;
    for (double temp : temperatures) {
        sum += temp;
    }
    std::cout << "Average temperature: " << sum / temperatures.size() << "\n";
    return 0;
}