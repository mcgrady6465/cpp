#include <iostream>
#include <iomanip>

constexpr double cm_in_inch = 2.54;
double cm_to_inch(int cm) {
    return cm / cm_in_inch;
}

double inch_to_cm(int inch) {
    return inch * cm_in_inch;
}

int main() {
    double length;
    char unit;
    std::cout << "Enter the length followed by the unit (c or i): ";
    std::cin >> length >> unit;
    switch (unit)
    {
    case 'c':
        std::cout << std::fixed << std::setprecision(2) << "Length in inches: " << cm_to_inch(length) << "\n"; break;
    case 'i':
        std::cout << std::fixed << std::setprecision(2) << "Length in cm: " << inch_to_cm(length) << "\n"; break;
    default:
        std::cout << "Unit not implemented\n"; 
        return 1;
    }
}