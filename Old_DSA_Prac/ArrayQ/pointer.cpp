#include<iostream>
using namespace std;

int main(){

    int num = 5;
    char name = 'R';
    double d = 4.56;

    cout<<"Print num:- "<<num<<endl;
    cout<<"Print name:- "<<name<<endl;
    cout<<"Print d:- "<<d<<endl;
    // cout<<"Adress of num is:- "<<&num<<endl;
    //ponter--
    int *p = &num;
    char *g = &name;
    double *dd = &d;
    cout<<"P is refrencing the value of num:- "<<*p<<"\nSize of Pointer p is :-"<<sizeof(p)
    <<"\nP is containing the address of num:- "<<p
    <<"\ng is refrencing the value of r:- "<<*g<<"\nSize of Pointer g is :-"<<sizeof(g)
    <<"\nP is containing the address of r:- "<<g
    <<"\ng is refrencing the value of d:- "<<*dd<<"\nSize of Pointer dd is :-"<<sizeof(dd)
    <<"\nP is containing the address of d:- "<<dd<<endl;
return 0;
}