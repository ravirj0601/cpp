#include<iostream>
using namespace std;

int main(){
    //pointer and arrays
    int marks[4]={34,54,99,55};
    int* p = marks;
    cout<<*(p++)<<endl;
    cout<<*(++p)<<endl;
    cout<<*(++p);



    return 0;
}