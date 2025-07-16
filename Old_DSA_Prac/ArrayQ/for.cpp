#include<iostream>

using namespace std;

int hw1()
{
    int n;
    cout<<"Enter the Value of n:-"<<endl;
    cin>>n;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
       sum+=i;
    }
    cout<<sum<<endl;
}

int hw2()
{
    int n=10;
    int a=0,b=1;
    cout<<a<<" "<<b;
    for (int i = 0; i <= n; i++)
    {
        int nextno = a+b;
        cout<<nextno<<" ";
        a=b;
        b=nextno;
    }
}

int hw3()
{
    int n;
    cout<<"Enter The value of the n:-"<<endl;
    cin>>n;
    bool isPrime = 1;
    for (int i = 2; i <= n-1; i++)
    {
        if (n%i==0)
        {
            isPrime = 0;
            break; 
        }
}
    if (isPrime==1)
    {
        cout<<"It is Prime no.";
    }
    else
    {
        cout<<"It's Not a Prime No.";
    }
}
int main()
{
    int n;
    cout<<"Sum of All No        1:- "<<endl
        <<"Fabonacci series     2:- "<<endl
        <<"Prime No             3:- "<<endl
        <<"Enetr Your Choice :- "<< endl;
    cin>>n;
    cout<<"---------------------------"<<endl;
    switch (n)
    {
    case 1:
        hw1();
        break;
    case 2:
        hw2();
        break;
    case 3:
        hw3();
        break;
    default:
        break;
    } 
}