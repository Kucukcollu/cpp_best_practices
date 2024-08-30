#include <iostream>

#include "custom_math_lib.hpp"

int main(int argc, char **argv)
{
    int number1{4};
    int number2{6};

    std::cout << "result of sum is: " << custom_math_lib::sum(number1, number2) << std::endl;

    return 0;
}