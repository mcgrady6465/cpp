#include <iostream>
#include <string>

int simple_error() {
    std::cout << "Are you kidding me?" << "\n";
    return 0;
}
int main () {
    std::string first_name, friend_name;
    char sex;
    int age;

    std::cout << "Enter the name of the person you would like to write to: ";
    std::cin >> first_name;
    std::cout << "Dear " << first_name << ",\n";
    std::cout << "I hope this letter finds you well.\n";
    std::cout << "I miss you. \n";

    std::cout << "Enter the name of the friend: ";
    std::cin >> friend_name;
    std::cout << "I hope you are having a nice day, " << friend_name << ".\n";
    std::cout << "Enter the gender of the friend: (m/f)" << "\n";
    std::cin >> sex;
    if (sex == 'm') {
        std::cout << "If you see " << friend_name << " please ask him to call me." << "\n";
    }
    if (sex == 'f') {
        std::cout << "If you see " << friend_name << " please ask her to call me." << "\n";
    }
    
    std::cout << "Enter the age of the friend: ";
    std::cin >> age;
    if (age<=0 || age>110) {
        simple_error();
    }
    if (age > 0 && age < 12) {
        std::cout << "Next year you will be " << age+1 << "." << "\n";
    }
    if (age==17) {
        std::cout << "Next year you will be able to vote." << "\n";
    }
    if (age>=70 && age <=110) {
        std::cout << "I hope you are enjoying retirement." << "\n";
    }

    std::cout << "Yours sincerely, Alex" << "\n";
    return 0;
}
