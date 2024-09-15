#include <iostream>

auto SomeFunction = [](int i){ return i + 4; };

template<typename T>
T Foo(T input)
{
    T result = SomeFunction(input);
    return result;
}

int main()
{
    std::cout << Foo(6) << std::endl;
    return 0;
}