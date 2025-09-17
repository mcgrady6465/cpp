#include <iostream>
using namespace std;

int main() {
    cout << "Please enter a first and a second name: ";
    string first_name, last_name, name;
    cin >> first_name >> last_name;
    name = first_name + " " + last_name;
    cout << "Name is: " << name << endl;
    return 0;
}