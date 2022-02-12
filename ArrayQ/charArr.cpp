#include<iostream>
#include<vector>
using namespace std;
int getLength(char chr[]){
    int count = 0;
    for (int i = 0; chr[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char chr[],int len){
    int s = 0;
    int e = len - 1;
    while(s<=e){
        swap(chr[s],chr[e]);
        s++;
        e--;
    }
}
char lowerCase(char ch){
    char chh;
    if (ch >= 'a' && ch<='z')
    {
        return ch;
    }
    else {
        char chh = ch -'A' +'a';
        return chh;
    }
}
bool palindrom(char chr[], int len){
    int s = 0;
    int e = len - 1;
    while(s<e){
        if ((chr[s] > 122|| chr[s] <97) && (chr[s] < 48 || chr[s] > 57 ))
        {
           s++; 
           continue;
        }
        if ((chr[e] > 122|| chr[e] <97) && (chr[e] < 48 || chr[e] > 57 ))
        {
            e--;
            continue;
        }
        
        if (lowerCase(chr[s]) == lowerCase(chr[e]))
            {
                s++;
                e--;
            }
        else{    
            return 0;
            }
    }
    return 1;
}

int main()
{
    char name[30];
    cout<<"Enter Your Name:- ";
    cin>>name;
    int len = getLength(name);
    cout<<"Your name is :- "<<name<<"\nand Length is :- "<<len;
    reverse(name,len);
    cout<<"\nReverse of your name is :- "<<name;
    // cout<<"Upper Case:- "<<lowerCase(name);
    cout<<"\nIs it Palindrom :- "<<palindrom(name,len);


return 0;
}
