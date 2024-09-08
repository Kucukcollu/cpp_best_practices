/*
reference: https://en.cppreference.com/w/cpp/language/rule_of_three
*/

#include <iostream>

class Base
{
    public:
        virtual void DoStuff();
        virtual ~Base() = default;               // destructor
        Base(const Base&) = delete;              // copy constructor
        Base(Base&&) = delete;                   // move constructor
        Base& operator=(const Base&) = delete;   // copy assingment operator
        Base& operator=(Base&&) = delete;        // move assignment operator
};

class Derived : public Base
{
    // do not need define any special member functions
};

int main()
{
    return 0;
}