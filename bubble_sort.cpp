#include<iostream>
#include<vector>
using namespace std;

void createArr(vector<int>&);
void printArr(vector<int>&);
void bubble(vector<int>&);

int main(){

vector<int> arr;
createArr(arr);
bubble(arr);   
printArr(arr);
return 0;
}

void bubble(vector<int> &arr){
    int size=arr.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
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