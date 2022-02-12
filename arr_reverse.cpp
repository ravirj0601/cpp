#include<iostream>
using namespace std;

int reverse_array(int arr1[],int size){
    int reverse[10];
    for (int i = 0; i < size; i++)
    {
        reverse[i]=arr1[size-i];
    }
    for (int j = 0; j < size; j++)
    {
        cout<<reverse[j]<<" ";
    }
    
}

int main(){
    int size;
    cout<<"Enter The Size of The Array :- ";
    cin>>size;
    int arr[100];
    cout<<"Enter The Elements of The Array :- "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    reverse_array(arr,size);
    return 0;
}