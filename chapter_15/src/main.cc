#include <iostream>
#include <vector>

int main()
{
    std::vector<float> values{3.2, 6.4, 4.0};

    for(int i = 0; i<=values.size(); i++) // mismatch
    {
        std::cout << values.at(i) << std::endl;
    }
    
    /*

    for(auto it = values.begin(); it != values.end(); ++it)
    {
        // range error
    }

    */

    for(const auto& item : values)
    {
        std::cout << item << std::endl;
    }

    return 0;
}