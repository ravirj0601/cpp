#include<iostream>
using namespace std;

int main(){
    int value = 1;
    int size;
    cout<<"Enter The size of Array :- ";
    cin>>size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i]=value;
    }
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}