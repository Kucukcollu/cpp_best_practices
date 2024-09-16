#include <iostream>

struct Foo
{
    Foo() = default;
    virtual ~Foo() = default;
    
    Foo(const Foo&) = delete;
    Foo(Foo&&) = delete;
    Foo& operator=(const Foo&) = delete;
    Foo& operator=(Foo&) = delete;

    template<typename T>
    constexpr void DoSomething(T) const noexcept{} 

    void DoSomething(double) const noexcept = delete;
};

int main()
{
    Foo f;

    // no error
    f.DoSomething(3.14f);
    // error
    // f.DoSomething(3.14f);

    return 0;
}