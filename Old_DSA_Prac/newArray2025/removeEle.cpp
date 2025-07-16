#include <experimental/filesystem>
#include <iostream>
#include <vector>

using namespace std;

int removeElement(vector<int>& myArr,int no){
    int i = 0;
    int j = 0;
    int n = myArr.size();
    while(j < n){
        int value = myArr[j];
        if(value != no){
            myArr[i++] = myArr[j];
        }
        j++;
    }
    return i;
}


int main(){
    vector<int> myArr = {0,1,2,2,3,0,4,2};
    for(auto  value: myArr){
        cout << value;
    }
    int no;
    cout << "\n";

    cin >> no;
   
    cout << "\nElement: " << removeElement(myArr,no) << "\n";   
    for(auto  value: myArr){
        cout << value;
    }
    return 0;
}
