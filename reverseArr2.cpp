#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void createArr(vector<int>&);
void printArr(vector<int>&);

int main(){
vector<int> arr;
createArr(arr);
reverse(arr.begin(),arr.end());
printArr(arr);  
return 0;
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