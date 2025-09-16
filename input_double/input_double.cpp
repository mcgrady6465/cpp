#include <iostream>
using namespace std;

int main() {
    cout << "Please enter a floating number: ";
    double number;
    cin >> number;
    cout 
        << "number: " << number
        << "\nnumber + 1: " << number + 1
        << "\nnumber three times: " << number*3
    << endl;
    return 0;
}