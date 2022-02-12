#include <iostream>
#include <vector>
using namespace std;

// void vecto(vector<int> &v){
//     int size=v.size();
//     for (int i = 0; i < size; i++){
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

int pairSum(int arr[], int size, int s)
{
    // vector<vector<int> > bb;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                if (arr[i] + arr[j] + arr[k] == s)
                {
                    cout << arr[i] << " " << arr[j] <<" "<< arr[k] << " are the pair of sum " << endl;
                    // vector<int> temp;
                    // temp.push_back(min(arr[i],arr[j]));
                    // temp.push_back(max(arr[i],arr[j]));
                    // bb.push_back(temp);
                }
            }
        }
    }
    return 0;
}
int main()
{

    int size, s;
    cout << "Enter The Value of S:- ";
    cin >> s;
    cout << "Enter the Size of Array:- ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    pairSum(arr, size, s);
    // for(auto element:pairSum(arr,size,s)){
    //     cout<<element<<endl;
    // }
    return 0;
}