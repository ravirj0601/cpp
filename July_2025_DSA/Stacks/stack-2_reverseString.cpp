#include<iostream>
#include<stack>
#include<string>
using namespace std;

void reverseStr(string &str){
    stack<char> st;
    for(int i = 0; i < str.length(); i++)
    {
        st.push(str[i]);
    }
    // cout << st.size() << "Stack Size \n";
    int j = 0;
    while(!st.empty()){    
        str[j] = st.top();
        st.pop();
        j++;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    string s = "Hello";
    cout << s << endl;
    reverseStr(s);
    cout << s << endl;

    return 0;
}
