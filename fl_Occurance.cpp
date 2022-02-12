#include <iostream>
using namespace std;


int fOccur(int arr1[], int size, int search)
{
    int start = 0;
    int ans=0;
    int end = size - 1;
    int mid = (end + start) / 2;
    while (start <= end)
    {
        if (arr1[mid] == search)
        {
            ans = mid;
            end = mid - 1;
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
    return ans;
}

int lOccur(int arr1[], int size, int search)
{
    int start = 0;
    int ans=-1;
    int end = size - 1;
    int mid = start +(end-start) / 2;
    while (start <= end)
    {
        if (arr1[mid] == search)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (search > arr1[mid])
        {
            start = mid + 1;
        }
        else if(search < arr1[mid])
        {
            end = mid - 1;
        }
        mid = start +(end-start) / 2;
    }
    return ans;
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
    int firstO = fOccur(arr, size, search);
    int lastO = lOccur(arr, size, search);
    int total_Occ = (lastO - firstO) + 1;
    cout << "The Search Item " << search << "'s First Ocurance is :- " << firstO << " \nLast Ocurance is :- " << lastO << endl;
    cout << "Total Occurance of "<< search << " is :- "<<total_Occ<<endl;
    return 0;
}