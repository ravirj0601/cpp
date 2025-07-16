#include<iostream>
using namespace std;

int main(){
//---EX-01--------//
/*
    int f = 8;
    int s = 18;
    int *ptr = &s;
    *ptr = 9;
    cout<< f <<" "<< s <<endl;
*/
//-----EX-02---------//
   /* int a = 6;
    int *q = &a;
    int *p = q;
    (*p)++;
    cout << a <<endl;
*/
//--------EX-03---------//
    // int a = 8;
    // int *p = &a;
    // cout<<(*p)++<<endl;
    // cout<<a<<endl;
//-------EX-04----------//
    // int *p = 0;
    // int first = 110;
    // *p = first;
    // cout<<*p<<endl;
//--------EX-05---------//
    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout<<first<<" "<<second<<endl;
//--------EX-06-----------//
    // float f = 10.5;
    // float p = 21.5;
    // float* ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout<<*ptr<<" - "<<f<<" - "<<p<<endl;
//---------EX-07----------//
    // int arr[5];
    // int *ptr;
    // cout<<sizeof(arr)<<" "<<sizeof(ptr)<<" "<<sizeof(*ptr)<<endl;
//--------EX-08-----------//
    // int arr[]= {11,12,13,14,15};
    // cout<< *(arr) <<" - "<< *(arr+1)<<endl;
    // cout<<arr<<" "<<(arr+1)<<endl;
    // int *p = arr;//it's can't be increased..
    // *p++;//#important..        
    // cout<<*p<<endl;
//--------Ex-09-----------//
    // char a = 'a';
    // char* b = &a;
    // a++;
    // cout<<*b<<endl;
//--------Ex-10-----------//
    // char arr[]="abcde";
    // char *p = arr;
    // cout<<p<<" /-/ "<<*p<<endl;
//--------Ex-11-----------//
    char str[]="raviranjan";
    char *p = str;
    cout<<str[0]<<" "<<p[0]<<" "<<p[2]<<endl;

return 0;
}