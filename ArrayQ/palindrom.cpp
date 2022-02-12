#include<iostream>
using namespace std;
char lower(char ch){
    char chh;
    if(ch >= 'A' && ch <= 'Z'){
        ch = ch -'A'+'a';
    }
    else
        return ch; 
    return ch;   
}
bool checkPalindrom(string s1){
    int size = s1.size();
    int s = 0;
    int e = size-1;
    while(s<e){
        if ((s1[s] > 122|| s1[s] <97) && (s1[s] < 48 || s1[s] > 57 ))
        {
            s++;
            continue;
        }
        if ((s1[e] > 122|| s1[e] <97) && (s1[e] < 48 || s1[e] > 57 ))
        {
            e--;
            continue;
        }
        if ( lower(s1[s]) == lower(s1[e]) )
        {
            s++;
            e--;
            // cout<<s1[s];
            // cout<<s1[e];
        }
        else
        {
            return 0;
        }          
    }
    return 1;
}
int main(){
    string s1;
    cout<<"Enter a first String:- ";
    cin>>s1;
    for (int i = 0; i < s1.size(); i++)
    {
        cout<<lower(s1[i]);
    }
    cout<<checkPalindrom(s1);
return 0;
}