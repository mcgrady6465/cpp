#include <iostream>
using namespace std;
int main()
{
    string first_name = "no_name"; // no name provided
    double age = 0; // no age provided
    cout << "Please enter your name and age: ";
    cin >> first_name >> age;
    if (age < 0) {
        cout << "Invalid age: " << age << endl;
        return 1;
    }
    double months = age * 12;
    cout << "Hello " << first_name << "(age=" << months << ")!" << endl;
    return 0;
}