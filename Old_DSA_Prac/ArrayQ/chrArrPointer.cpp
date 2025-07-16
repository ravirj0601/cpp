#include<iostream>
using namespace std;

int main(){

    int arr[5] = {1,2,3,4,5};
    // char ch[6] = "abcde";

    // cout<<"Int Array :- "<<arr<<endl;
    // cout<<"Chracter Array(ch) :- "<<ch<<endl;
    // cout<<"Chracter Array(&ch) :- "<<&ch<<endl;

    // char *chh = ch;
    //It will Print Entire string
    // cout<<"Chracter pointer :- "<<chh<<endl;

    char j = 'abcd';
    char *t = &j; 
    cout<<t<<" "<<&j<<endl;
    cout<<*t<<" "<<&t<<" "<<&j<<endl;

return 0;
}