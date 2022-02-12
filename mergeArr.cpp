#include<iostream>
#include<vector>

using namespace std;
void printArr(const vector<int>);
vector<int> createArr(vector<int>);
vector<int> mergeArr(vector<int>,vector<int>);
int main(){
    vector<int> arr;
    vector<int> arr1;
    vector<int> finalArr;
    arr = createArr(arr);
    arr1 = createArr(arr1);
    printArr(arr);
    printArr(arr1);
    finalArr = mergeArr(arr , arr1);
    printArr(finalArr);
return 0;
}
vector<int> mergeArr(vector<int> arr1,vector<int> arr2){
        int size1 = arr1.size(),size2 = arr2.size();
        int i = 0 , j = 0;
        vector<int> final;
        while(i< size1 && j < size2){
            if (arr1[i]<arr2[j])
            {
                final.push_back(arr1[i++]);
            }
            else
            {
                final.push_back(arr2[j++]);
            }
        }
        //copy remaining arr1 element
        while(i<size1){
            final.push_back(arr1[i++]);
        }
        while (j<size2)
        {
            final.push_back(arr2[j++]);
        }       
    return final;
    }
vector<int> createArr(vector<int> arrE){
    int size;
    cout<<"Enter The Size of The Array:- ";
    cin>>size;
    int element;
    for (int i = 0 ; i < size; i++)
    {
        cin>>element;
        arrE.push_back(element);
    }
    return arrE;
}
void printArr(const vector<int> arr){
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<endl;
}