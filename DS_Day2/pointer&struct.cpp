#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int width;
};

int main(){
    Rectangle r = {10, 5};
    
    cout << r.length << " : " << r.width << endl;
    // Creating Pointer

    Rectangle *p = &r;
    cout << "form Local Pointer:- " << p->length << " : " << p->width << endl;
    
    // Creating memory in Heap
    // for C
    // p = (Rectangle *)malloc(sizeof(Rectangle));
    
    // for C++
    p = new Rectangle;
    p->length = 15;
    p->width = 10;
    
    cout <<"from Heap Memory:- "<< p->length << " : " << p->width << endl;

    delete(p);

    return 0;
}