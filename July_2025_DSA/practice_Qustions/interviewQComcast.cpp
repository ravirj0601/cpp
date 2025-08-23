#include <iostream>
#include <memory> // Required for std::unique_ptr

class BaseClass{
public:
    BaseClass() {
        std::cout << "BaseClass Constructor\n";
    }
    // The function must be virtual in the base class for runtime polymorphism
    virtual void funcname(int a, int b) {
        std::cout << "Base function called with a=" << a << ", b=" << b << "\n";
    }
    // It's good practice for base classes with virtual functions to have a virtual destructor
    virtual ~BaseClass() {
        std::cout << "BaseClass Destructor\n";
    }
};

class DerivedClass : public BaseClass{
public:
    DerivedClass() {
        std::cout << "DerivedClass Constructor\n";
    }
    // Using 'override' keyword is good practice to ensure you are actually overriding a virtual function
    void funcname(int a, int b) override {
        std::cout << "Derived function called with a=" << a << ", b=" << b << "\n";
    }
    ~DerivedClass() override { // Also good practice to mark as override
        std::cout << "DerivedClass Destructor\n";
    }
};

int main(){
    std::cout << "--- Demonstrating Runtime Polymorphism ---\n";

    // 1. Using a raw pointer to the BaseClass type, pointing to a DerivedClass object
    // This demonstrates polymorphism, but requires manual memory management (delete).
    BaseClass* basePtrRaw = new DerivedClass();
    basePtrRaw->funcname(10, 20); // Calls DerivedClass::funcname
    delete basePtrRaw; // Essential to prevent memory leak

    std::cout << "\n";

    // 2. Using std::unique_ptr for automatic memory management
    // std::unique_ptr<BaseClass> can hold a DerivedClass object
    std::unique_ptr<BaseClass> basePtrSmart = std::make_unique<DerivedClass>();
    basePtrSmart->funcname(30, 40); // Calls DerivedClass::funcname

    std::cout << "\n";

    // 3. Directly creating a DerivedClass object (no polymorphism demonstrated here)
    DerivedClass dc;
    dc.funcname(50, 60); // Calls DerivedClass::funcname directly

    return 0;
}