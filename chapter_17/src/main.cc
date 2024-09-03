#include <iostream>
#include <algorithm>
#include <vector>

int main()
{

    static const std::vector<int> values{2,5,3,7,9,5,12, 54, 32,16,89,0,8,65,4,3};

    const auto has_value = std::any_of(values.begin(), values.end(), [](const int num){return num < 0 ? true : false;});

    std::cout << std::boolalpha <<  has_value << std::endl;

    

    return 0;
}