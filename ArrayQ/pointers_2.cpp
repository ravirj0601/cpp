#include<iostream>
#include<vector>
using namespace std;

int main(){

    int arr[6]={34,56,55,45};
    int *p = arr;
    cout<<"p = "<<*p<<endl;
    cout<<"1st "<<sizeof(arr)/sizeof(int)<<endl;
    cout<<"2nd "<<sizeof(*arr)<<endl;
    cout<<"3rd "<<sizeof(&arr)<<endl;
    cout<<*(&arr)<<endl;
    cout<<*(arr+1)<<endl;
    int *g = &arr[3];
    cout<<"*g = "<<*g<<endl;
    cout<<"g = "<<g<<", Address of arr[3]= "<<&arr[3]<<endl;
    cout<<"size of Pointer p = "<<sizeof(p)<<endl;
    cout<<"size of Pointer *p = "<<sizeof(*p)<<endl;  
    /*--*p means value of p
    and &p means address of p--*/


return 0;
}