#include<iostream>
using namespace std;
// For call by value
// void swap(int x, int y){
//     int temp;
//     x = temp;
//     x = y;
//     y = temp;
// }

// Call by address
void swap(int *x, int *y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Call by refference
void swap(int &x, int &y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main(){
    int a = 10;
    int b = 20;
    cout << a << " : " << b << endl; 
    // Pass by value
    // swap(a, b);

    // Call by address
    // swap(&a, &b);

    // Call by refference
    swap(a, b);
    
    cout << "After Func. calling-> " <<  a << " : " << b << endl; 
    return 0;
}