#include <cstddef>
#include <iostream>
#include <stack>
#include <string>
using namespace std;

// Psudo code for this program
// In a boolean type function where string is geting passed 
//      -   Traverse from the string
//          -   If there is opening brackets push it into stacks.
//          -   If there is closing bracket is there check 
//              -   Check if stack is empty ot not.
//              -   If any opening bracket is in stack or not.
//                  - if not return not valid
//      

bool checkString(string &braces){
    stack<char> st;
    for (size_t i = 0 ; i < braces.length(); i++) {
        if (braces[i] == '{' || braces[i] == '[' || braces[i] == '(') {
            st.push(braces[i]);
        }
        
        if (braces[i] == '}' || braces[i] == ']' || braces[i] == ')') {
            if (st.empty()) {
                return false;
            }else {
                char ch = st.top();
                if ((braces[i] == ')' && ch != '(') || 
                    (braces[i] == ']' && ch != '[') || 
                    (braces[i] == '}' && ch != '{')){
                    return false;
                    }
                st.pop();    
            }
        }
    }
    
    if (st.empty()) {
        return true;
    }else{
        return false;
    }

}

int main() {
    string s = "(){{}[]";
    bool result = checkString(s);
    if (result) {
        cout << "This string is Valid.\n";
    }else {
        cout << "This string is not valid.\n";
    }
    return 0;
}

