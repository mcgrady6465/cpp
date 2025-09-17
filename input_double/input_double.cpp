#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Please enter a floating number: ";
    double number;
    cin >> number;
    cout 
        << "number: " << number
        << "\nnumber + 1: " << number + 1
        << "\nnumber three times: " << number*3
        << "\nnumber twice: " << number*2
        << "\nnumber squared: " << number*number
        << "\nhalf of number: " << number/2
        << "\nsquared root of number: " << sqrt(number)
        << endl;
    return 0;
}