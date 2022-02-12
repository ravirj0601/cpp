#include <iostream>
#include <vector>
using namespace std;

double squareRoot(int);
int binarySearch(vector<int> &, int);
int pivot(vector<int> &);
void mountainPick(vector<int> &);
int lPos(vector<int> &, int);
int fPos(vector<int> &, int);
void recurssion(vector<int> &);
void selection_Sort(vector<int> &);
void printArr(const vector<int> &);
void createArray(vector<int> &);

int main()
{
    vector<int> arr;

    int g;
    cout << "Enter Your Choice :- ";
    cin >> g;
    switch (g)
    {
    case 1:
        createArray(arr);
        recurssion(arr);
        // printArr(arr);
        break;
    case 2:
        createArray(arr);
        selection_Sort(arr);
        cout << "Sorted Array is :- ";
        printArr(arr);
        break;
    case 3:
        createArray(arr);
        mountainPick(arr);
        break;
    case 4:
        createArray(arr);
        pivot(arr);
        break;
    case 5:
        createArray(arr);
        cout << "Enter The Value you want to find:- ";
        int f;
        cin >> f;
        cout<<binarySearch(arr, f);
        break;
    // case 6:
    //     createArray(arr);
    //     cout << "Enter The Value you want to find:- ";
    //     int g;
    //     cin >> g;
    //     cout<<findPos(arr,g);
    //     break;
    case 6:
        int n;
        cout<<"Enter A No :- ";
        cin>>n;
        cout<<squareRoot(n);
        break;
    default:

        break;
    }

    return 0;
}

double squareRoot(int n){
    int s = 0;
    int pre = 4;
    long long int ans = 0;
    int e = n - 1;
    long long int mid = s+(e-s)/2;
    while(s<=e){
        long long int sqare = mid * mid;
        if(sqare == n){
            ans = mid;
        }
        else if (sqare < n)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s+(e-s)/2;
    }
   
    float factor = 1;
    float ans1 = ans;
    for (int i = 0; i < pre; i++)
    {
        factor = factor / 10;
        for (double j = ans1; j*j < n; j= j+factor)
        {
            ans1 =  j;
        }
        
    }
    return ans1;
}

int binarySearch(vector<int> &arr, int g)
{
    int s = 0;
    int ans = -1;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] == g)
        {
            ans = mid;
            return ans;
            // cout<<"check1"<<endl;
        }
        else if (arr[mid] < g)
        {
            s = mid + 1;
            // cout<<"check2"<<endl;
        }
        else
        {
            e = mid - 1;
            // cout<<"check"<<endl;
        }
        mid = s + (e - s) / 2;
    }
    // cout << arr[ans] << " " << ans;
    return -1;
}

int pivot(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    cout << arr[s] << " is pivot value and it's position is " << s << endl;
    return s;
}

void mountainPick(vector<int> &arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    cout << "The Mountain Pick of This array is :- " << arr[e] << endl
         << " And It's in the Position :- " << e << endl;
}

void createArray(vector<int> &arr)
{
    int size;
    cout << "Enter The size of the Array:- ";
    cin >> size;
    int input = 1;
    for (int i = 0; i < size; i++)
    {
        cin >> input;
        arr.push_back(input);
    }
}

void printArr(const vector<int> &arr)
{
    // int size = sizeof(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

void selection_Sort(vector<int> &arr)
{
    int size = arr.size();
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}

void recurssion(vector<int> &arr)
{
    int n;
    cout << "Enter The No you want to find :- ";
    cin >> n;
    int fPosition = fPos(arr, n);
    int lPosition = lPos(arr, n);
    cout << "First position of the " << n << " is " << fPosition << endl
         << "And last position is " << lPosition << endl;
}

int fPos(vector<int> &arr, int n)
{
    int s = 0, ans = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] == n)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < n)
        {
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

int lPos(vector<int> &arr, int n)
{
    int s = 0, ans = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] == n)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < n)
        {
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
