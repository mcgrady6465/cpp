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

double yuans_to_dollars(int yuan) {
    return yuan * 0.15;
}

int main() {
    std::cout << "Enter the amount of money followed by identifier (y, p, u): ";
    int amount;
    char identifier;
    std::cin >> amount >> identifier;
    switch (identifier)
    {
    case 'y': 
        std::cout << std::fixed << std::setprecision(2) << "Amount in krone: " << yens_to_krone(amount) << "\n"; break;
    case 'p':
        std::cout << std::fixed << std::setprecision(2) << "Amount in dollars: " << pounds_to_dollars(amount) << "\n"; break;
    case 'u':
        std::cout << std::fixed << std::setprecision(2) << "Amount in dollars: " << yuans_to_dollars(amount) << "\n"; break;
    default:
        std::cout << "Identifier not implemented\n"; return 1;
    }
    return 0;
}