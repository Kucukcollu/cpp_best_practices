#include <iostream>

auto safeDivide = [](double numerator, double denominator) -> double 
{
    if (denominator == 0)
    {
        throw std::runtime_error("Division by zero is not allowed.");
    }
    return numerator / denominator;
};

void HandleException()
{
    try
    {
        throw;
    }
    catch(const std::runtime_error& e)
    {
        std::cerr << "--------runtime error--------" << std::endl;
    }
    catch(const std::out_of_range& e)
    {
        std::cerr << "--------out of range error--------" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "--------exception--------" << std::endl;
    }
}

void DoSomething()
{
    try
    {
        auto res = safeDivide(4,0);
        std::cout << res << std::endl;
    }
    catch(...)
    {
        HandleException();
    }
}

int main()
{
    DoSomething();

    return 0;
}