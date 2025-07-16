#include<iostream>
#include<conio.h>
using namespace std;
class sum
{
    int a,b,t;
    public:
    void getdata(void);
    void setdata(void);
};
void sum :: getdata(void)
{
    cout<<"Enter Value Of A and B"<<endl;
    cin>>a>>b;
}
void sum :: setdata(void)
{
    t = a+b;
    cout<<"Sum of "<<a<<"and "<<b<<"= "<<t<<endl;
}
int main(){
    sum obj;
    obj.getdata();
    obj.setdata();
    return 0;
}