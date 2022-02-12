#include <iostream>
using namespace std;
int binarySearch(int arr1[], int size, int search)
{
    int start = 0;
    int end = size - 1;
    int mid = (end + start) / 2;
    while (start <= end)
    {
        if (arr1[mid] == search)
            
        {
            return mid;
        }
        if (search > arr1[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int size, search;
    cout << "Enter The Size of The Array:-";
    cin >> size;
    int arr[size];
    cout << "Enter The Element of the array(In the increasing or decreasing way):-";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter The Element You want to Search:- ";
    cin >> search;
    int index = binarySearch(arr, size, search);
    cout << "The Search Item " << search << " is in " << index << " position" << endl;
    return 0;
}