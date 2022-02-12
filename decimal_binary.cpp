#include<iostream>
#include<math.h>
using namespace std;
int reverse(int n){
    int digit;
    int result = 0;
    while(n!=0){
        digit=n%10;
        result=result*10+digit;
        n=n/10;
    }
    cout<< result<<endl;
}
int dec_bin(int n){
    int rev = 0,i=0;
    while(n!=0){
        int digit = n & 1;
        rev = (digit*pow(10,i)) + rev;
        n=n>>1;
        i++;
    }
    cout<<"Binary Form of no :- "<<rev<<endl;
}

int bin_dec(int n)
{
    int rev=0,digit=0,i=0;
    while (n!=0)
    {
        digit=n%10;
        if (digit==1)
        {
            rev=rev+pow(2,i);
        }
        i++;
    }
    cout<<rev<<endl;

}
int main(){
    int n,j;
    cout<<"Enter a Number:- "<<endl;
    cin>>n;
    cout<<"What do you want to do these with this no:-"<<endl;
    cout<<"For Reverse           :-1 "<<endl
        <<"For Decimal To binary :-2 "<<endl
        <<"For binary To Decimal :-3 "<<endl;
    cout<<"Enter your choice:-";
    cin>>j;
    switch (j)
    {
    case 1:
        reverse(n);
        break;
    case 2:
        dec_bin(n);
        break;
    case 3:
        bin_dec(n);
        break;
    default:
        cout<<"Nothing"<<endl;
        break;
    }   

}

