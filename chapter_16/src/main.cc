#include <iostream>
#include <string>
#include <map>
#include <utility>

std::map<std::string, int> get_map()
{
    std::map<std::string, int> result{{"C++", 17}};
    return result;
}

using element_type = std::pair<std::string, int>;

int main(int argc, char **argv)
{
    for(const element_type& item : get_map())
    {
        std::cout << item.first << " " << item.second << std::endl;
    }

    return 0;
}