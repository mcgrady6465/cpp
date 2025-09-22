#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

std::vector<std::string> words;

/**
 * Reads words from stdin and prints out the number of words
 * and then each unique word in sorted order.
 */
int main() {
    for (std::string word; std::cin >> word;) {
        words.push_back(word);
    }
    // do something with words
    std::cout << "Number of words: " << words.size() << "\n";
    std::sort(words.begin(), words.end());

    for (int i = 0; i < words.size(); ++i) {
        if (i == 0 || words[i] != words[i - 1]) {
            std::cout << words[i] << "\n";
        }
    }
    return 0;
}