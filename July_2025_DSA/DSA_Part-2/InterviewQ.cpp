#include<iostream>
#include <vector>
using namespace std;
std::vector<string> reverseWords(string words){
    // Brute Force Soln
    reverse(words.begin(),words.end());
    words += ' ';
    vector<string> ans;
    string substring;
    for(int i= 0; i < words.length()+1; i++){
        if(words[i] != ' ' && words[i] != '\n'){
            substring += words[i];
        }else{
            reverse(substring.begin(), substring.end());
            ans.push_back(substring);
            ans.push_back(" ");
            substring.clear();
        }
    }

    
    
    // Step 1: Reverse the entire string
    reverse(words.begin(), words.end());

    // Step 2: Reverse each word in-place
    int start = 0;
    for (int i = 0; i <= words.size(); ++i) {
        if (i == words.size() || words[i] == ' ') {
            reverse(words.begin() + start, words.begin() + i);
            start = i + 1;
        }
    }

    
    return ans;
};

int main()
{
    // std::cout<<"Hello World";
    string str = "mirafra software technologies";
    vector<string> ans= reverseWords(str);
    // cout << sizeof(ans);
    for(int i = 0; i < ans.size(); i++){
        cout <<  ans[i] ;
    }
    cout << endl;
    return 0;
}
