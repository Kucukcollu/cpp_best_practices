#include <iostream>

enum Choices
{
    option1 = 3
};

enum OtherOptions
{
    option2 = 5
};

enum class Selection
{
    option = 2
};

enum class OtherSelection
{
    option = 6
};

int main()
{
    // C style enum
    int choice = option1;
    int other_choice = option2;

    std::cout << choice << std::endl;
    std::cout << other_choice << std::endl;

    choice = option2;
    other_choice = option1;
    
    std::cout << choice << std::endl;
    std::cout << other_choice << std::endl;

    // scoped enum

    Selection select = Selection::option;
    OtherSelection selected = OtherSelection::option;

    int selection_select = static_cast<int>(select);
    int other_selection_selected = static_cast<int>(selected);

    std::cout << selection_select << std::endl;
    std::cout << other_selection_selected << std::endl;

    return 0;
}