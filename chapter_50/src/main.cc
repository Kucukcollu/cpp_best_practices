#include <iostream>
#include <vector>

int main()
{
    // empty lambda, does nothing
    []{};

    // optional to have parameter list
    [](){};

    // C++17 explicit constexpr
    []() constexpr -> void { std::cout << "void return" << std::endl;};

    // immediately invoked lambda
    auto result = [](){ return 68; }();
    std::cout << "result of immidiately return lambda: " << result << std::endl;

    // after C++17
    constexpr auto i = []{ return 44; }();
    std::cout << "i: " << i << std::endl;

    // generic lambda, C++14
    [](auto x){ return x + 42; };

    // variadic lambda
    [](auto ... x){ return std::vector<int>(x...);};

    // capture by copy, C++11
    [i](){ return i + 45; };

    // generalized capture, C++14
    [num = 18]{ return num - 4; };

    // stateful lambda, C++11
    [i]() mutable { return i; };

    // explicit template, C++20
    []<typename T>(T x){ return x + 60; };

    // C++20 lambda with variadic capture expression
    [](auto ... val){ return [...val = val]{ return (val + ...); }; };

    return 0;
}