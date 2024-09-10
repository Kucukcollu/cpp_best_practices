#include <iostream>
#include <string_view>

enum class Values
{
    apple,
    banana,
    orange
};

std::string_view GetName(Values value)
{
    switch (value)
    {
    case Values::apple:
        return "apple";
    case Values::banana:
        return "banana";
    }

    return "unknown"; // be aware of unhandled enum values
}

int main()
{
    std:: cout << GetName(static_cast<Values>(15)) << std::endl;

    return 0;
}