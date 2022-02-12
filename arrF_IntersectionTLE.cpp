#include<iostream>
#include<vector>
using namespace std;
void vecto(vector<int> &v){
    int size=v.size();
    for (int i = 0; i < size; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int ele,size;
    cout<<"Enter The Size Of the Vector:-";
    cin>>size;
    vector<int> vect;
    for (int i = 0; i < size; i++)
    {
        cin>>ele;
        vect.push_back(ele);
    }
    vecto(vect);

return 0;
}