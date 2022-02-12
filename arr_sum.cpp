#include<iostream>
using namespace std;

int sumArr(int arr1[],int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + arr1[i];
    }
    return sum;
}
int main(){
    int size;
    cout<<"Enter The size of Array :- ";
    cin>>size;
    int arr[100];
    cout<<"Enter The Element of Array :- ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Sum Of Array is :- "<<sumArr(arr,size)<<endl;
    return 0;
}