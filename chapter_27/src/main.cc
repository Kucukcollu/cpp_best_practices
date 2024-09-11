#include <iostream>
#include <stdexcept>
#include <type_traits> // std::enable_if, std::is_integral
#include <utility>
#include <vector>
#include <array>

template<typename T, typename B>
auto divide(T t, B b)
{
    if constexpr(std::is_integral_v<T> && std::is_integral_v<B>)
    {
        if(b == 0)
        {
            throw std::runtime_error("divide by zero");
        }
    }

    return t / b;
}

int main()
{

    std::cout << divide(3.2f, 0.8f) << std::endl;

    // std::cout << divide(3, 0) << std::endl; // throw error

    return 0;
}