#include <iostream>

template<typename Arithmetic>
Arithmetic divide(Arithmetic numerator, Arithmetic denominator)
{
    return numerator / denominator;
}

int main()
{
    std::cout << divide(6,3) << std::endl;
    std::cout << divide(4.2, 2.1) << std::endl;
    return 0;
}