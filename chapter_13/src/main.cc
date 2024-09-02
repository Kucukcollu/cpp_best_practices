#include <iostream>
#include <vector>
#include <array>

int main()
{
    // do not use this
    [[maybe_unused]] static const std::vector<int> old_angles{-90, -45, 0, 45, 90};
    
    // use this
    [[maybe_unused]] static constexpr std::array<int, 5> new_angles{-90, -45, 0, 45, 90};

    return 0;
}