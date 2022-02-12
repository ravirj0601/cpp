#include<iostream>
using namespace std;

int main(){

    int size=7;
    int arr[10]={4,5,3,2,4,3,2};
    int arr1[10]={5,4,3,6,8,9,1};
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i]<arr1[j])
            {
                break;
            }
            if (arr[i]==arr1[j])
            {
                cout<<arr[i]<<" ";  
                arr1[j]=INT_MIN;             
            }
        }        
    }
    
return 0;
}
