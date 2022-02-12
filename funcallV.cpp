#include<iostream>
using namespace std;
int sum(int a, int b){
    int c = a + b;
    return c;
}
/*it will not change the values becouse its a copy of the actual
 parameter of the main function*/
 //CALL BY VALUE
int swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
}
/* it will swap the values becouse its share the address of the actual
parameter of the main function */
//CALL BY REFERENCE
int swaPointer(int* a,int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 4 , b= 6;
    cout<<"The sum of 4 and 6 is "<<sum(a,b)<<endl;
    cout<<"The Value of A is "<<a<<" and B is "<<b<<endl;
    swap(a,b);
    swaPointer(&a,&b);
    cout<<"The Value of A is "<<a<<" and B is "<<b<<endl;
    return 0;

return 0;
}