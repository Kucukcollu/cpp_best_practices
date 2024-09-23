#include <iostream>
#include <functional>

double divide(double numerator, double denominator)
{
    return numerator / denominator;
}

int main()
{
    // avoid this
    auto inverted_divide = std::bind(divide, std::placeholders::_2, std::placeholders::_1);

    std::cout << inverted_divide(6, 8) << std::endl;

    // prefer this
    auto lambda_inverted_divide = [](const auto numerator, const auto denominator){ return divide(denominator, numerator); };

    std::cout << lambda_inverted_divide(8, 6) << std::endl;

    return 0;
}