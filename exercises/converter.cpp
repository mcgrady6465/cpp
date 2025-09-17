#include <iostream>
#include <string>

double miles_to_kilometers(double miles) {
    return miles * 1.609;
}

int prompt_int() {
    int val1, val2;
    std::cout << "Enter two values: ";
    std::cin >> val1 >> val2;
    std::cout << "Sum: " << val1 + val2 << "\n";
    std::cout << "Product: " << val1 * val2 << "\n";
    std::cout << "Difference: " << val1 - val2 << "\n";
    std::cout << "Ratio: " << val1 / val2 << "\n";
    std::cout << "Val1 > Val2: " << (val1 > val2) << "\n";
    return 0;
}

int prompt_double() {
    double val1, val2;
    std::cout << "Enter two values: ";
    std::cin >> val1 >> val2;
    std::cout << "Sum: " << val1 + val2 << "\n";
    std::cout << "Product: " << val1 * val2 << "\n";
    std::cout << "Difference: " << val1 - val2 << "\n";
    std::cout << "Ratio: " << val1 / val2 << "\n";
    std::cout << "Val1 > Val2: " << (val1 > val2) << "\n";
    return 0;
}

int order_int() {
    int val1, val2, val3;
    std::cout << "Enter three values: ";
    std::cin >> val1 >> val2 >> val3;
    if (val1 > val2) {
        int temp = val1;
        val1 = val2;
        val2 = temp;
    }
    if (val2 > val3) {
        int temp = val2;
        val2 = val3;
        val3 = temp;
    }
    if (val1 > val2) {
        int temp = val1;
        val1 = val2;
        val2 = temp;
    }
    std::cout << "Ordered sequence: " << val1 << val2 << val3 << "\n";
    return 0;
}

int order_string() {
    std::string val1, val2, val3;
    std::cout << "Enter three values: ";
    std::cin >> val1 >> val2 >> val3;
    if (val1 > val2) {
        std::string temp = val1;
        val1 = val2;
        val2 = temp;
    }
    if (val2 > val3) {
        std::string temp = val2;
        val2 = val3;
        val3 = temp;
    }
    if (val1 > val2) {
        std::string temp = val1;
        val1 = val2;
        val2 = temp;
    }
    std::cout << "Ordered sequence: " << val1 << val2 << val3 << "\n";
    return 0;
}

int odd_or_even() {
    int val1;
    std::cout << "Enter a value: ";
    std::cin >> val1;
    std::cout << "Odd or even: " << (val1 % 2 == 0) << "\n";
    return 0;
}

int spelling_numbers(std::string number) {
    if (number == "one") {
        return 1;
    }
    if (number == "two") {
        return 2;
    }
    if (number == "three") {
        return 3;
    }
    if (number == "four") {
        return 4;
    }
    if (number == "five") {
        return 5;
    } else {
        std::cout << "Invalid number" << "\n";
    }
    return 0;
}

int coins() {
    int pennies, nickels, dimes, quarters, dollars;
    std::cout << "Enter the number of coins: ";
    std::cin >> pennies >> nickels >> dimes >> quarters >> dollars;
    std::cout << "Pennies: " << pennies << "\n";
    std::cout << "Nickels: " << nickels << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dollars: " << dollars << "\n";
    std::cout << "Total: " << pennies + nickels*5 + dimes*10 + quarters*25 + dollars*100 << "\n";
    return 0;
}

int main() {
    double miles = 10;
    double kilometers = miles_to_kilometers(miles);
    std::cout << "Miles: " << miles << "\n";
    std::cout << "Kilometers: " << kilometers << "\n";
    prompt_int();
    prompt_double();
    order_int();
    order_string();
    odd_or_even();
    int converted = spelling_numbers("one");
    std::cout << converted << "\n";
    coins();
    return 0;
}