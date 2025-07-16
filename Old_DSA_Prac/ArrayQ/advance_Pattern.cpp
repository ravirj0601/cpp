#include<iostream>

using namespace std;

int hw1()
{
    int n;
    cout<<"Enter the Row no:- "<<endl;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int space = n-i;
        while (space)
        {
            cout<<" ";
            space--;
        }
        int j =1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        int start = i-1;
        while (start)
        {
            cout<<"*";
            start--;
        }
        cout<<endl;
        i++;
    }
}

int hw2()
{
    int a=4,b=6;
    cout<<"a&b:- "<<(a&b)<<endl
        <<"a|b:- "<<(a|b)<<endl
        <<"~a :- " <<(~a)<<endl
        <<"a^b:- "<<(a^b)<<endl
        <<(17>>2)<<endl
        <<(21<<2)<<endl
        <<(17<<1)<<endl;
    
    int i=7;
     cout<<++i<<endl;
     cout<<i++<<endl;
     cout<<i--<<endl;
     cout<<--i<<endl;

}

int main() 
{
    int n;
    cout<<"Enter 1 For HW1 " << endl
        <<"Enter 2 For HW2 " << endl

        <<"Enter your Choice:-";
    cin>>n;

    switch (n)
    {
    case 1:
        hw1();
        break;
    case 2:
        hw2();
        break;
    
    default:
        cout<<"Nothing";
        break;
    }
 
    return 0;
}