#include<iostream>
using namespace std;

int main(){

    // int *p = 0;
    // cout<<"p "<<*p;
//----------------------//
/*int i = 6;
int *g = &i;
cout<<g<<endl;
cout<<*g<<endl;

int *p = 0;
p = &i;
cout<<p<<endl;
cout<<*p<<endl;*/
//----------------------//
int num = 5;
int *p = &num;
// int **a = &f;
cout<<"before "<<num<<endl;
(*p)++;
cout<<"after "<<num<<endl;
//------------------------//


//---------copy pointer -----------//
int *q = p;
cout<<" "<<q<<" ___ "<<p<<endl;
cout<<"\t"<<*q<<" ___ "<<*p<<endl;

//---------important concept-----------//
int i = 5;
int *r = &i;
cout<<"value of i:- "<<*r<<endl;
(*r)++;
cout<<"value of i:- "<<*r<<endl;


cout<<"Adress of i before:- "<<r<<endl;
r++;
cout<<"Adress of i before:- "<<r<<endl;



return 0;
}