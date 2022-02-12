#include<iostream>
using namespace std;

int main(){
    int a = 5;
    int* b = &a;
    //Pointer is a datatype which contain address of the other variables or datatype.
    
    
    //& --> (addres of) Operator.
    cout<<"The Address of a is "<<&a<<endl;
    cout<<"The Address of a is "<<b<<endl;
    //* --> (Value at) Dereference operator.
    cout<<"The value of b contain is "<<*b<<endl;
    
    // pointer to poiner
    int** c = &b;
    cout<<"Addres of b is "<<&b<<endl;
    cout<<"Addres of b is "<<c<<endl;
    cout<<"The Value in b is "<<*c<<endl;
    cout<<"The Value in c's address is "<<**c<<endl;
    return 0;
}