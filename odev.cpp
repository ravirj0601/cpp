#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter any number:";
    cin >> n;
    int i;
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            continue;
            // cout<<"its an even no"; /* code */
        }
    cout << i <<" is an odd no"<< endl;
    }
    return 0;
}