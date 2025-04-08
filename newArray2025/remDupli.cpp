
// #include <cstdint>
#include <iostream>
#include <vector>
using namespace std;

// void removeDuplicate(vector<int>& myArr){
//     for(long unsigned int i = 1; i < myArr.size();i++){
//     	if (myArr[i] == myArr[i-1]){
//             myArr[i] = myArr[i+1];
// 	    cout << "\n" <<  myArr[i];
//         }
//     }
// }
int removeDuplicate(vector<int>& myArr){
    int pos = 0;
    for(auto value:myArr){
        if (pos==0){
            myArr[pos++] = value; 
        }else if(value > myArr[pos -1]){
            myArr[pos++] = value;
        }
    }
    return pos;
}

int main(){
    vector<int> myArr = {0,0,1,1,1,2,2,3,3,4};
    for(long unsigned int i = 0; i < myArr.size(; i++){
        cout << myArr[i] << " ";
    }
    cout << "\n" << removeDuplicate(myArr) << "\n";;
    for(long unsigned int i = 0; i < myArr.size(); i++){
        cout << myArr[i] << " ";
    }
}

