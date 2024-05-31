#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cout << "Enter the String: ";
    getline(cin, s);

    int count[256] = {0};  // Array to count occurrences of each character

    // Count the occurrences of each character in the string
    for (int i = 0; i < s.length(); i++) {
        count[s[i]]++;
    }

    cout << "Duplicate characters in the string are: ";
    for (int i = 0; i < 256; i++) {
        if (count[i] > 1) {
            cout << i << " ";
        }
    }

    return 0;
}
