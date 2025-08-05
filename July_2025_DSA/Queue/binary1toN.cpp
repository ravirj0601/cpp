#include<iostream>
#include<queue>
#include"arrQueue.h"

using namespace std;

vector<string> binary1toN(int n){
    vector<string> ans;
    queue<string> llQ;
    string l1,  l2;
    llQ.push("1");
    int i = 1;
    while(i <= n){
        string front = llQ.front();
        llQ.pop();
        ans.push_back(front);
        l1 = front + "0";
        l2 = front + "1";
        llQ.push(l1);
        llQ.push(l2);
        i++;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    int N = 10;
    vector<string> result = binary1toN(N);

    for (const string& s : result) {
        cout << s << " ";
    }
    cout << endl;
    return 0;
}
 