#include<iostream>
using namespace std;

int pivot(int arr[],int size){
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/ 2;
    while (start < end)        
    {
        if (arr[mid]>=arr[start])
        {
            start = mid +1;         
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
    
}

int main(){

    int size, search;
    cout << "Enter The Size of The Array:-";
    cin >> size;
    int arr[size];
    cout << "Enter The Element of the array(In the increasing or decreasing way):-";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int pIvot = pivot(arr,size);
    cout<<"The Pivot of this Following array is :- "<<pIvot<<endl;


return 0;
}