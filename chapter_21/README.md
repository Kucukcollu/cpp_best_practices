# 21. If You Must Do Manual Resource Management, Follow the Rule of 5

**The Rule of Zero** says if you can avoid default operators then do.

**The Rule of Three** says if you need to implement one the following defaults,

- copy constructor
- move constructor
- destructor

then, implement them all.

**The Rule of Five** is improved version (move semantics) of The Rule of Three after C++11.

- copy constructor
- move constructor
- copy assignment operator
- move constructor operator
- destructor

The Rule of Five = The Rule of Three + Move Semantics

Using *delete* and *default* is also possible.

Best Practice for **A polymorphic class**

```c++
class CloneableBase
{
    public:
        CloneableBase() = default;                                 // constructor
        virtual ~CloneableBase() = default;                        // destructor

        CloneableBase(const CloneableBase&) = delete;              // copy constructor
        CloneableBase(CloneableBase&&) = delete;                   // move constructor
        CloneableBase& operator=(const CloneableBase&) = delete;   // copy assingment operator
        CloneableBase& operator=(CloneableBase&&) = delete;        // move assignment operator
};

```

