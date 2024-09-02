#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, char **argv)
{
    // use lambda to initialize a const object
    const auto data = [](){
        std::vector<int> result;
        for(int i=0;i<=10;i++)
        {
            if(i % 2 == 0)
            {
                result.push_back(i);
            }
        }
        return result;
    }();

    for(const auto& item : data)
    {
        std::cout << item << std::endl;
    }

    return 0;
}
