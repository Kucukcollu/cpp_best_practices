#include <iostream>
#include <algorithm>
#include <vector>
#include <string_view>

std::string_view PrintString(std::string_view input)
{
    const auto sv2 = input.substr(0, 2);
    return sv2;
}

// C++11
template <typename T, typename D>
auto Division(T numerator, D denominator) -> decltype(numerator / denominator)
{
    return numerator / denominator;
}

// C++14
template<typename N, typename D>
auto Divide(N numerator, D denominator)
{
    return numerator / denominator;
}

int main()
{
    std::vector<int> numbers{2,2,3,4,5,6,7,8,98,545,3,3,6,5,46,4,3,2,2,2,2};
    const auto result = std::count(numbers.begin(), numbers.end(), 2);

    std::cout << "number of 2: " << result << std::endl; 

    auto const number_of_three = std::count(std::begin(numbers), std::end(numbers), 3);

    std::cout << "number of 3: " << number_of_three << std::endl; 

    // string_view C++17
    std::string_view str{"name"};

    const auto res_str = PrintString(str);

    std::cout << res_str << std::endl;


    // Division
    std:: cout << Division(4, 5.2) << std::endl;

    // Divide
    std::cout << Divide(12, 6) << std::endl;


    return 0;
}