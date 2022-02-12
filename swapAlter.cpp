#include<iostream>
using namespace std;
int swapAlter(int arr1[],int size);
void printArray(int arr1[],int size);
void inputArray(int arr1[],int size);
int main(){
    int size;
    cout<<"Enter The size of the Array:- "<<endl;
    cin>>size;
    int arr[size];
    inputArray(arr,size);
    swapAlter(arr,size);
    printArray(arr,size);

return 0;
}
int swapAlter(int arr1[],int size){
    for (int i = 0; i < size; i+=2)
    {
        if (i+1 < size){
            swap(arr1[i],arr1[i+1]);
        }        
    }
}
void printArray(int arr1[],int size){
     for (int j = 0; j  < size; j++)
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
        cout<<arr1[j]<<" ";
    }
    cout<<endl;
}
void inputArray(int arr1[],int size){
    cout<<"Enter The Elements of the Array:- "<<endl;
    for (int i = 0; i < size; i++)
    {
        cin>>arr1[i];
    }
}