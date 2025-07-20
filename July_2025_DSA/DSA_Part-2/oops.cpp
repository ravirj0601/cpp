/*****
 * Turing Interview Prepration..
 * 
 */
#include<iostream>
using namespace std;

 class oops
 {
 private:
    int* ptr;
 public:
    oops();
    oops(int val);
    oops(const oops& other);
    virtual ~oops();
    virtual void speak(); // run time polymorphism
    void print();
 };
 void oops::speak(){
    std::cout<< "Speak...." << std::endl;

 }
 oops::oops()
 {
 }
 
 oops::oops(int val) {
     ptr = new int(val);
     std::cout << "Constructor: " << *ptr << std::endl;
 }

 oops::oops(const oops& other) {
     ptr = new int(*other.ptr);
     std::cout << "Copy Constructor: " << *ptr << std::endl;
 }

 void oops::print() {
     std::cout << "Value: " << *ptr << std::endl;
 }

 oops::~oops()
 {
     delete ptr;
     std::cout << "Destructor\n";
 }
 
 class Animal: public oops{
    public:
        void speak() override{
            cout << "Yellinng.... \n";
        }
 };

int main() {
    oops a(10);
    oops b = a;  // triggers copy constructor
    a.print();
    b.print();
    return 0;
}