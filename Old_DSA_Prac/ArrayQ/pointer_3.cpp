#include<iostream>
using namespace std;

int main(){

    int a[20]={1,2,3,4};
    // cout << &a <<endl;
    // cout << &a[0]<<endl;
    // cout << a <<endl;
    // cout<<"------------------"<<endl; 
    // int *p = &(a[0]);
    // cout<<"p = "<<p<<endl;//p contain address of a
    // cout<<"&p = "<<&p<<endl;//&p contain its own address
    // cout<<*p<<endl;
    // cout<<*(p+1)<<endl;
    // a = a + 1;
    // cout<<a<<endl;
    //--------------------------------------

    int *ptr = a;
    cout<<ptr<<endl;
    ptr = ptr + 1;
    cout<<ptr<<endl;
    
return 0;
}