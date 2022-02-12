#include<iostream>
using namespace std;
void update(int d){
    d++;
}
int* func(int a){
    int* ans = &a;         // BAD PRACTICE
       return ans;
}
int main(){

    int n = 5;
    cout<<"before "<<n<<endl;
    update(n); 
    cout<<"after "<<n<<endl;
    cout<<func(n)<<" "<<&n<<endl;
3
return 0;
}

