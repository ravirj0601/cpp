#include <iostream>
#include <string>
using namespace std;

/**
 * PsudoCode
 *
 * Question i have a array with 1000 to 9999
 * find a count of numbers which has repeated digits continously.
 * 1234, 1323 is valid
 * 1233 is not as it has 33
 *  function call countRepeat
 *  initialize count with 0
 *  -   for loop will iterate from 1st to last and for each no range is 1000 to 9999
 *      -   std::string numstr = std::to_String(num[i])
 *      -   for each no i will store it in char[] size of 3 as max length of each no is 4,
 *      loop will be if i < 3
 *          -   if numstr[i] == numstr[i+1]
 *              -   count++
 *              -   break from loop
 *  -   In main
 *      -   call the function and store it in int type int res = countRepeat();
 *      -   print the returned no this is count of repeated digit no 
 *
 * */

int countRepeated(){
    int count = 0;
    for (int i = 1000; i <= 9999; i++) {
        string numstr = to_string(i);
        bool noDetected = false;
        for (int j = 0; j < numstr.length() - 1; j++) {
            if (numstr[j] == numstr[j+1]) {
                noDetected = true;
                break;
            }
        }
        if (noDetected) {
            count++;
        }
    }
    return count;
}
int main() {
    int res = countRepeated();
    cout << "Total count: " << res << "\n";
    return 0;
}

