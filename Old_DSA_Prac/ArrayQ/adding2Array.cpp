#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int>&);
void createArr(vector<int>&);
vector<int> addArr(vector<int>,vector<int>);
int main(){
    vector<int> arr;
    vector<int> arr1;
    cout<<"----------------------"<<endl;
    cout<<"Entry must be in digit"<<endl;
    cout<<"----------------------"<<endl;
    createArr(arr);
    createArr(arr1);
    vector<int> answer = addArr(arr,arr1);
    printArr(answer);


return 0;
}
void reverse(vector<int> &arr){
    int e = arr.size() - 1;
    int s =0;
    while(s<=e){
        swap(arr[s++],arr[e--]);
    } 
}
vector<int> addArr(vector<int> arr1,vector<int> arr2){
    int i = arr1.size()-1;
    int j = arr2.size()-1;
    vector<int> ans;
    int carry = 0;
    while(i>=0&&j>=0){
        int sum = arr1[i]+arr2[j]+carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        i--;
        j--;
    }
    while(i>=0){
        int sum = arr1[i]+carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        i--;
    }
    while(j>=0){
        int sum = arr2[j]+carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    while (carry!=0)
    {
        int sum = carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);

    }
    
    reverse(ans);
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
