#include <iostream>

int GetValue(int &input)
{
    if(&input == nullptr) // undefined behaviour
    {
        return 44;
    }
    else
    {
        return input;
    }
}

int main()
{
    return 0;
}