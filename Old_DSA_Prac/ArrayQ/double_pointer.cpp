#include<iostream>
using namespace std;

int main(){

    int a = 5;
    int* p = &a;
    int** ptr = &p;
    cout<<"value at ptr(**ptr) = "<<**ptr<<endl;
    cout<<"value at *ptr:- "<<*ptr<<endl;
    cout<<"address store at ptr(ptr):- "<<ptr<<endl;
    cout<<"adress of a(&a):- "<<&a<<endl;
    cout<<"Address of p(&p):- "<<&p<<endl;
    cout<<"Address of ptr(&ptr):- "<<&ptr<<endl;
    cout<<"Address of p:- "<<p<<endl;
return 0;
}