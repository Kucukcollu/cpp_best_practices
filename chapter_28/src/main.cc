#include <iostream>
#include <concepts>
#include <stdexcept>

auto divide(std::integral auto numerator, std::integral auto denominator)
{
    // is integer division
    if(denominator == 0)
    {
        throw std::runtime_error("divide by zero!");
    }

    return numerator / denominator;
}

auto divide(auto numerator, auto denominator)
{
    return numerator / denominator;
}

int main()
{
    std::cout << divide(6,2) << std::endl;

    std::cout << divide(8.4, 2.1) << std::endl;
    return 0;
}