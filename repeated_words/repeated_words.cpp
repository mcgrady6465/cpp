#include <iostream>
using namespace std;

int main() {
    string previous, current;
    int count = 0;
    cout << "Enter the word: ";
    while (cin >> current) {
        count++;
        if (current == previous) {
            cout << "Repeated word: " << current << endl;
        }
        previous = current;
        cout << "Word count " << count << endl;
        cout << "Enter the current word: ";
    }
    return 0;
}