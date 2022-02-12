#include <iostream>
using namespace std;
void printArray(int arr2[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << " ";
    }
    cout<<endl;
}
void reverse(int arr3[],int size){
    int start = 0;
    int end = size-1;
    while (start<=end)
    {
        swap(arr3[start],arr3[end]);
        start++;
        end--;
    }
    
}
int main()
{

    int arr[6] = {1, 4, 3, 5, 6, 3};
    int arr1[5] = {4, 3, 5, 2, 1};
    reverse(arr, 6);
    reverse(arr1, 5);

    printArray(arr, 6);
    printArray(arr1, 5);

    return 0;
}