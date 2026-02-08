#include <iostream>
using namespace std;

string reversedStrings(string text) {
    string rev = "";
    for (int i = text.length() - 1; i >= 0; i--) {
        rev += text[i];
    }
    return rev;
}

int main() {
    string sentence;
    getline(cin, sentence);
    cout << reversedStrings(sentence);
    return 0;
}

