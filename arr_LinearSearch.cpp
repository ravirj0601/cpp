#include<iostream>
using namespace std;

bool linear_search(int arr1[],int size,int f){
    for (int i = 0; i < size; i++)
    {
        if (arr1[i]==f)
        {
            return 1;
        }
    }
    return 0;
}


int main(){
    int size=10;
    int arr[10]={4,5,3,4,6,23,45,69,8,7};
    int s;
    cout<<"Enter The Value you want to Search :- ";
    cin>>s;

    bool found = linear_search(arr,size,s);
    if (found)
    {
        cout<<"Yes it's in the Array"<<endl;
    }
    else{
        cout<<"It's not Found"<< endl;
    }
    return 0;
}