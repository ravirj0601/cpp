#include <iostream>
using namespace std;

int main()
{
    int n;
   
    cout << "enter a no:-";
    cin >> n;
    int i;
    for (i = 1; i <= n; i++)
    {
        int div;
        for (div = 2; div < i; div++)
        {
            if (i % div == 0)
            {
               break;
            }
        }
        if (div == i)
            cout<< i << " is a prime no" << endl;
        else
            cout << i << " is not a prime no" << endl;
    }
    return 0;
}