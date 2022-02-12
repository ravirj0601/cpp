#include<iostream>
using namespace std;

int main(){

    float n1,n2;
    cout<<"Enter two numbers"<<endl;
    cin>>n1>>n2;
    cout<<"Enter Operator"<<endl;
    char o;
    cin>>o;
    switch (o)
    {
    case '+':
        cout<<n1+n2<<endl;
        break;
    case '-':
        cout<<n1-n2<<endl;
        break;
    case '*':
        cout<<n1*n2<<endl;
        break;
    case '/':
        cout<<n1/n2<<endl;
        break;
    
    default:
    cout<<"great yoou have done a great job"<<endl;
        break;
    }
}