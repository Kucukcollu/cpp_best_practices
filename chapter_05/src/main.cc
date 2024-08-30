#include <iostream>
#include <vector>
#include <string>

int main(int argc, char **argv)
{
    // !! Attention please !!
    // in the following, code smells bad for educational purposes
    float number{3.4684};
    int another_number;
    another_number = number;

    double new_nuber = (double)number;

    std::string name{"nameless"};

    if(name == "name")
        std::cout << "name :" << name << std::endl;
    else if(name == "foo")
        std::cout << "name :" << name << std::endl;
    else if(name == "nameless")
        std::cout << "name :" << name << std::endl;
    else
        std::cout << "name :" << name << std::endl;

    return 0;
}