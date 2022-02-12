#include<iostream>
using namespace std;

int max(int arr[],int size){
    int i = 0;
    int max = 0;
    for ( i = 0; i < size; i++)
    {
        if (arr[i]>arr[i+1])
        {
            max = arr[i];         
        }
        else
        {
            max = arr[i+1];
        }
    }
    cout << "Max is "<<max <<endl;
}
int maxi(int arr[],int size){
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int minimum(int arr[],int size){
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

// int inputArray(int arr[],int size){
//     cout<<"Input a Size of Array :- " ; cin>>size;
//     for (int i = 0; i < size; i++)
//     {
//         cin>>arr[i];
//     }
//     return arr;
// }
int main(){
    int size;
    int arr1[100];
    cout<<"Enter The size of Array :- ";
    cin>>size;
    cout<<"Enter The elements of Array :- ";
    
    for (int i = 0; i < size; i++)
    {
        cin>>arr1[i];
    }
    //inputArray(arr1,size);

    //max(arr1,size);
    cout<<"Maximum size in arrray is :- " << maxi(arr1,size)<<endl;
    cout<<"Minimum size in arrray is :- " << minimum(arr1,size)<<endl;
    return 0;
}