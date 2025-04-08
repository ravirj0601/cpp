#include <iostream>
using namespace std;

class array
{
    int size;
    int arr1[];

public:
    void putdata(void);
    void getdata(void);
};
void array::putdata(void)
{
    cout << "Enter the Size of the Array:- ";
    cin >> size;
    cout << "Enter The Data in the array:- " << endl;
    for (int i = 0; i < size; i++){
        cin >> arr1[i];
        i++;
    }
}
void array::getdata(void)
{
    cout << "Here the Whole Array:- " << endl;
    for (int i = 0; i < size; i++){
        cout << arr1[i] << endl;
        i++;
    }
}
int main()
{
    array a;
    a.putdata();
    a.getdata();

    return 0;
}
