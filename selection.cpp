#include<iostream>
#include<vector>
using namespace std;
void selectioSort(vector<int>&);
void createArr(vector<int>&);
void printArr(vector<int>&);
int main(){

    vector<int> arr;
    // int size;
    createArr(arr);
    selectioSort(arr);
    printArr(arr);
return 0;
}
void selectioSort(vector<int> &arr){
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i]<arr[j])
            {
                swap(arr[i],arr[j]);           
            }
        }        
    }   
}
void createArr(vector<int> &arr){
    cout<<"Enter The Size of Array:- ";
    int size;
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