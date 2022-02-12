#include<iostream>
#include<vector>
using namespace std;


int binarySearch(vector<int> &, int,int,int);
int pivot(vector<int> &);
int findPos(vector<int> &, int);
int main(){

   vector<int> arr;
   int input,size;
   cout<<"Insert size of the array :- ";
   cin>>size;
   for (int i = 0; i < size; i++)
   {
       cin>>input;
       arr.push_back(input);
   }
    int g;
    cout<<"Enter the value you want to search:-";
    cin>>g;
    cout<<findPos(arr,g);
    

return 0;
}


int findPos(vector<int> &arr, int g){
    int pivot1 = pivot(arr);
    int size = arr.size()-1;
    if (g >= arr[pivot1] && g <= arr[size-1])
    {
        return binarySearch(arr,g,pivot1,size-1);
    }
    else
    {
        return binarySearch(arr,g,0,pivot1-1);
    }
    
}

int binarySearch(vector<int> &arr, int g,int s,int e)
{
    // int s = 0, 
    int ans = -1;
    // int e = arr.size() - 1;
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
    // return -1;
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
    // cout << arr[s] << " is pivot value and it's position is " << s << endl;
    return s;
}