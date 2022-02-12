#include<iostream>
#include<vector>
using namespace std;
void createArr(vector<int>&);
void printArr(vector<int>&);
int unique(vector<int>&);
int main(){
    vector<int> arr;
    createArr(arr);
    int d = unique(arr);
    cout<<d;
    // printArr(arr);
return 0;
}
int unique(vector<int> &arr){
    int ans = 0;
    for (int i = 0; i < sizeof(arr)-1; i++)
    {
        ans = ans^arr[i];
    }   
    return ans; 
}
void createArr(vector<int> &arr){
    int size;
    cout<<"Enter The size of the Array:- ";
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
