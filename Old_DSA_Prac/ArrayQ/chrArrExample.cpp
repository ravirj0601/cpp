#include<iostream>
using namespace std;

int length(char arr[]){
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }
   return count; 
}
void reverse(char arr[],int n){
    int s = 0;
    int e = n - 1;
    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}
int main(){
    int size;
    cout<<"Enter The Size of The Array:- ";
    cin>>size;
    char arr[size];
    cout<<"Enter Any Character:- ";
    cin>>arr;
    cout<<arr<<endl;
    int leng = length(arr);
    cout<<leng<<" is length of the character."<<endl;
    reverse(arr,leng);
    cout<<arr;

return 0;
}

