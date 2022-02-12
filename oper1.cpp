#include <iostream>
#include <stdio.h>
using namespace std;
    int p()
    {
        int a = 5;
        a = 1, 2, 3;
        cout << a << endl;
        a = (1, 2, 3);
        cout << a << endl;
    }
    int dd()
    {
        int x=2;
        (x & 2)? cout<<false<<endl:cout<<true<<endl;
        return 0;
    }
    int hard()
    {
        int a =1,b=3,c;
        c = b << a;
        b = c * (b*(++a)--);
        a=a>>b;
        cout<<b<<endl;
        return 0;
    }
    int gg()
    {
        int a,b=3,c=2;
        a=b*c--;
        cout<<a<<"  "<<c<<endl;
    }
   
int main()
{
 p();
 dd();
 hard();
 gg();
}