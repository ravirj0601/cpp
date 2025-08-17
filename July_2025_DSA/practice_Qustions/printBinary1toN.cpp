#include <iostream>
#include <queue>
#include <string>
#include <vector>
using namespace std;

/**
 *  Okey let me write psudocode
 *  Function call which will return vector and take a int number
 *      -   first create a int type vector
 *      -   create a Queue
 *      -   2 variable string type
 *      -   push 1 the first one in queue.
 *      -   we will start a loop till the i reach the called number
 *          -   get the top of queue into a variable
 *          -   truncate with 0
 *          -   then truncate with 1
 *          -   store first one into queue
 *          -   store second one into queue
 *          -   pop first one and store it in vector
 *      -   return vector
 *
 *  main function
 *      -   get the no to get binary no till from 1
 *      -   and call the function with the no and return it to vector 
 *      -   print the vector
 *  
*  ----------Improved One-------------
 *
 *  function generateBinary(n):
 *      create queue<string> q
 *      create vector<string> result
 *      push "1" into q
 *
 *      repeat n times:
 *          curr = front of q
 *          pop q
 *          add curr to result
 *          push curr + "0" into q
 *          push curr + "1" into q
 *      return result
 *
 *      main:
 *          read n
 *          call generateBinary(n) → store in vector
 *          print the vector
 *
 * */

vector<string> binary1ToN(int n){
    vector<string> ans;
    if (n <= 0) {
        return ans;
    }
    queue<string> qu;
    qu.push("1");
    while (ans.size() < n) {
        string curr = qu.front();
        qu.pop();
        ans.push_back(curr);
        string a = curr + "0";
        string b = curr + "1";
        qu.push(a);
        qu.push(b);
    }
    return ans;
}

int main() {
    cout << "Enter Number: ";
    int n;
    cin >> n;
    vector<string> ans = binary1ToN(n);
    for (const auto nu : ans) {
        cout << nu << " ";
    }
    cout << "\n";
    return 0;
}

