#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;
vector<int> find_Dupli(vector<int> &,int);
void inputElem(vector<int> &,int);
void printArray(vector<int> &);
int main(){
vector<int> arr;
int size;
cout<<"Input The size of The Array:- ";
cin>>size;
inputElem(arr,size);

vector<int> arr1=find_Dupli(arr,size);
printArray(arr1);
return 0;
}

vector<int> find_Dupli(vector<int> &arr,int size){
    vector<int> ans;
    sort(arr.begin(),arr.end());
    for (int i = 0; i < size; i++)
    {
            if (arr[i]==arr[i+1])
            {
                ans.push_back(arr[i]); 
                arr[i] = INT_MIN;         
            }     
    }   
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout<<ans[i]<<" ";
    // }
    // printArray(ans);
    return ans;
}

void inputElem(vector<int> &arr,int size){
    int input = 0;
    for (int i = 0; i < size; i++)
    {
        cin>>input;
        arr.push_back(input);
    }
}

void printArray(vector<int> &arr){
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
}

