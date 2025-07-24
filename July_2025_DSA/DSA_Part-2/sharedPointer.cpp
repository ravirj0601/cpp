#include <iostream>
using namespace std;

void sharedP()
{
    shared_ptr<int> p = make_shared<int>(20);
    cout << p.use_count() << endl;
    shared_ptr<int> cp = p;
    cout << p.use_count() << endl;
}
void weakP()
{
    weak_ptr<int> wp; // step 1: declare weak_ptr

    {
        shared_ptr<int> sp = make_shared<int>(100); // step 2: create shared_ptr
        wp = sp;                                    // step 3: assign weak_ptr

        cout << "Inside scope:\n";
        cout << "Use count: " << sp.use_count() << endl; // should be 1
        cout << "Is expired? " << wp.expired() << endl;  // should be falsei
        if (auto locked = wp.lock())
        {
            cout << "Value: " << *locked << endl;
        }
        else
        {
            cout << "The object has been deleted.\n";
        }
    } // sp goes out of scope here

    cout << "\nOutside scope:\n";
    cout << "Is expired? " << wp.expired() << endl; // should be true now

    // Optional: Try locking it
    if (auto locked = wp.lock())
    {
        cout << "Value: " << *locked << endl;
    }
    else
    {
        cout << "The object has been deleted.\n";
    }
}

int main(int argc, char const *argv[])
{
    unique_ptr<int> p = make_unique<int>(10);
    cout << *p << endl;
    unique_ptr<int> mp = std::move(p);
    // cout << *p << endl;
    cout << *mp << endl;
    sharedP();
    weakP();
    return 0;
}
