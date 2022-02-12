#include<iostream>
using namespace std;

int main(){

    int arr[4]={5,8,4,2};
    //-------------for address---------------
    cout<<arr<<endl;
    cout<<arr+1<<endl;
    cout<<&arr[2]<<endl;
    // cout<<(arr+1)<<endl;


    cout<<"-------------for Value-------------------"<<endl;
    cout<<*arr<<endl;
    cout<<*arr+1<<endl;//adding 1 with the value of arr[0]
    cout<<*(arr+1)<<endl;//adding 1 with adderess of arr
    cout<<*(arr+2)<<endl;//--arr[i]=*(arr+1)---is same
    
    int i = 3;
    cout<<i[arr]<<endl;
    // cout<< arr.size() <<endl;
    cout<<sizeof(arr)/sizeof(arr[0])<<endl;
    int len = *(&arr + 1) - arr;
    cout<<"len = "<<len<<endl;
    

return 0;
}