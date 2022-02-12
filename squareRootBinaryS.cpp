#include <iostream>
using namespace std;
int squareRoot(int search)
{
    int s = 0;
    int e = search;
    long long int mid = s + (e - s) / 2;
    long long int ans = -1;
    while (s <= e)
    {
        long long int squa = mid * mid;
        if (squa == search)
        {
            return mid;
        }
        else if (squa <= search)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

double precision(int s, int search)
{
    int pre = 3;
    float factor = 1;
    float ans = s;
    for (int i = 0; i < pre; i++)
    {
        factor = factor / 10;
        for (double j = ans; j * j < search; j = j + factor)
        {
            ans = j;
        }
    }
    return ans;
}

int main()
{

    int size, search;
    // cout << "Enter The Size of The Array:-";
    //  cin >> size;
    //  int arr[size];
    cout << "Enter The Element You want to find Square Root:- ";
    cin >> search;
    // cout << "Enter The Element of the array(In the increasing or decreasing way):-";
    // int arr[search];
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr[i];
    // }
    int s = squareRoot(search);

    cout << s << "\nwith precision :- " << precision(s, search) << endl;

    return 0;
}