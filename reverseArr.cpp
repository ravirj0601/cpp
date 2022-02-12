#include<iostream>
#include<vector>
using namespace std;

int reverseItem(int arr[],int m,int size){
    
    int j=1;
    for (int i = 0; i < size; i++)
    {
        if (i<m){
            cout<<arr[i]<<" ";           
        }
        else{   
            cout<<arr[size-j]<<" ";
            // for (int j = 0; j < 5-m; j++)
            // {
            //     cout<<arr[5-j];
            // }
            j++;
        }
        
    }
    return 0;
}

int main(){
    int size;
    cout<<"Enter The Size of the Array:- ";
    cin>>size;
    int arr[size];
    cout<<"Enter The Elements of the Array :- ";
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    int m;
    cout<<"Enter The Index Value You want to reverse from :- ";
    cin>>m;
    // cout<<"check it";
    reverseItem(arr,m,size);

return 0;
}