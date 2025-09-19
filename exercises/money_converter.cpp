#include <iostream>
#include <iomanip>

constexpr double yen_to_krone = 0.067;
constexpr double pound_to_dollars = 1.31;

double yens_to_krone(int yen) {
    return yen * yen_to_krone;
}

double pounds_to_dollars(int pounds) {
    return pounds * pound_to_dollars;
}

int main() {
    std::cout << "Enter the amount of money followed by identifier (y or p): ";
    int amount;
    char identifier;
    std::cin >> amount >> identifier;
    if (identifier == 'y') {
        std::cout << std::fixed << std::setprecision(2) << "Amount in krone: " << yens_to_krone(amount) << "\n";
    }
    else if (identifier == 'p') {
        std::cout << std::fixed << std::setprecision(2) << "Amount in dollars: " << pounds_to_dollars(amount) << "\n";
    }
    else {
        std::cout << "Identifier not implemented\n";
        return 1;
    }
    return 0;
}