#include <iostream>
#include <memory>
using namespace std;

class Student {
public:
    Student(string name) {
        this->name = name;
        cout << "Student " << name << " created\n";
    }

    ~Student() {
        cout << "Student " << name << " destroyed\n";
    }

    void show() {
        cout << "Hi, I am " << name << endl;
    }

private:
    string name;
};

int main() {
    // your code here
    return 0;
}