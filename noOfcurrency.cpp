#include<iostream>
using namespace std;
int main() {
int n,hundred=0,fifty=0,twenty=0,one=0;
cout<<"Enter an Amount:- ";
cin>>n;
hundred=n/100;
n %=100;
fifty = n/50;
n %= 50;
twenty = n / 20;
n %= 20;
one = n / 1;
cout<< "Hundred:- "<< hundred << endl 
    << "Fifty :- "<< fifty << endl
    << "Twenty :- "<< twenty << endl
    << "One :-"<< one << endl;

    return 0;
}