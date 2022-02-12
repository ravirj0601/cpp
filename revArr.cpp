#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

void printA(vector<int> &arr,int size){
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void rev(vector<int> &arr,int size,int m){
    int s = 0,e = size-1;
    // vector<int> ans;
    while (s<e) 
    {
        if (s>m)
        {
            swap(arr[s],arr[e]);
            e--;
        }
        s++;
    }
    
}

int main(){
    int size,input = 1;
    cout<<"Enter The Size of the Array:- ";
    cin>>size;
    vector<int> arr;
    cout<<"Enter The Elements of the Array :- ";
    for (int i = 0; i < size; i++)
    {
        cin>>input;
        arr.push_back(input);
    }
    cout<"check";
    int m;
    cout<<"Enter The Index Value You want to reverse from :- ";
    cin>>m;
    // cout<<"check it";
    // vector<int> :: iterator it = arr.at(m);
    // vector<int> :: iterator itr = arr.at(size);
    rev(arr,size,m);
    printA(arr,size);

return 0;
}
