#include<iostream>
using namespace std;

void array(int arr[],int size){
    int i=0;
    cout<<"Enter The Elements of The Array"<<endl;
    while (i<=size)
    {
        cin>>arr[i];
        i++;
    }
cout<<"Prinnting the Array:- "<<endl;
cout<<"----------------------"<<endl;
    int j=0;
    while(j<=size){
        cout<<arr[j]<<" ";
        j++;
    }
}

int main(){
    int arr[10]={4,7};
    int n=10;
 
    array(arr,n);

    return 0;
}