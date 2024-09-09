#include <iostream>

int main()
{
    const int number{6};
    const int zero{0};

    std::cout << "Result: " <<  number / zero << std::endl;

    return 0;
}