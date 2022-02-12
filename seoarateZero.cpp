#include<iostream>
#include<vector>
using namespace std;
void createArr(vector<int>&);
void printArr(vector<int> &arr);
void seprateZero(vector<int>&);
int main(){
    vector<int> arr;
    createArr(arr);
    seprateZero(arr);
    printArr(arr);

return 0;
}
void seprateZero(vector<int> &arr){
    int size = arr.size();
    for (int i = 1; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[i]==0)      
            {
                swap(arr[i],arr[j]);
            }
        }
        
    }
    
}
void createArr(vector<int> &arr){
    int size ;
    cout<<"Enter The Size of the Array:- ";
    cin>>size;
    int element = 0;
    for (int i = 0; i < size; i++)
    {
        cin>>element;
        arr.push_back(element);
    }
    
}
void printArr(vector<int> &arr){
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}