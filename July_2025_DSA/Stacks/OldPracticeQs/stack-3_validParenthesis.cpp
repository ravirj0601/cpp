#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Function to check if a string has valid parentheses
bool isValid(string s) {
    stack<char> st;
    for (size_t i = 0; i < s.length(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            st.push(s[i]);
        } else if (s[i] == ')' || s[i] == '}' || s[i] == ']') {
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            if ((s[i] == ')' && top != '(') ||
                (s[i] == '}' && top != '{') ||
                (s[i] == ']' && top != '[')) {
                return false;
            }
            st.pop();
        }
    }
    return st.empty();
}

int main() {
    string s;
    cout << "Enter a string of parentheses: ";
    cin >> s;

    if (isValid(s)) {
        cout << "Valid\n";
    } else {
        cout << "Invalid\n";
    }

    return 0;
}