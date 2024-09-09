#include <iostream>

/*
You can see some bad code in this file.
This is for educational purposes!
*/

class EmptyClass
{
    public:
        EmptyClass(std::string input) : name_(input){}

        int Member()
        {
            if(this == nullptr) // When optimizing, GCC now assumes the this pointer can never be null, which is guaranteed by the language rules.
            {
                return 44;
            }
            else
            {
                return 0;
            }
        }

        void DoStuff()
        {
            // do stuff
        }

        void DoAnotherStuff()
        {
            delete this;

            if(this)
            {
                // this block will always be executed, nothing changed our view of `this`
            }

            // never do this
            this->DoStuff(); // Undefined Behaviour
        }

    private:
        std::string name_;
};

int main()
{
    EmptyClass *obj = nullptr;
    obj->DoStuff(); // never do this

    return 0;
}