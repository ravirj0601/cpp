#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for(int i=1;i<=n;i++){
        factorial = factorial * i;
    }
    return factorial;
}
int nCr(int n,int r){
    
    int a = fact(n);
    int b = fact(r)*fact(n-r); 
    return a/b;
    
}
int main() {
    int n,r;
    cout<<"Enter the value of the n:- ";
    cin>>n;
    cout<<"Enter the value of the r:- ";
    cin>>r;
    
    cout<<nCr(n,r)<<endl;
    return 0;
}