
#include<iostream>
#define ASCII_SIZE 256
using namespace std;
char lowerCase(char ch){
    char chh;
    if (ch >= 'a' && ch<='z')
    {
        return ch;
    }
    else {
        char chh = ch -'A' +'a';
        // return chh;
    }
}
char getMax(string s){
    int len = s.size();
    // cout<<len;
    int count[ASCII_SIZE]={0};
    int max = 0;
    char ans;
    for (int i = 0; i < len; i++)
    {
        s[i]=lowerCase(s[i]);
    }
    
    for (int i = 0; i < len; i++)
    {
        count[(s[i])]++;
        if (max < count[s[i]])        
        {
            max = count[s[i]];
            ans = s[i];
        }
        
    }    
    return ans;
}
int main()
{
    char ans;
    string s;
    cin>>s;
    cout<<getMax(s);
return 0;    
}