#include<iostream>
using namespace std;
 struct emplyee
    {
        /* data */
        int eId;
        char faVChar;
        float salary;
    };
int main(){
   struct emplyee harry;
   harry.eId = 1;
   harry.faVChar = 'c';
   harry.salary = 120000;
   cout<<"The Value is "<<harry.eId<<endl;
   cout<<"The Value is "<<harry.faVChar<<endl;
   cout<<"The Value is "<<harry.salary<<endl; 
    return 0;
}