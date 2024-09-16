#include <iostream>

/*
Assume this is a very important function(actually it is as name suggested, lol)
and the return value should be used after just this function called!
We can use [[nodiscard]] attribute to warn the use by compiler.
*/
[[nodiscard("This is a tutorials code of nodiscard attribute")]] auto VeryImportantFunction() -> int
{
    auto number{4};
    return number;
}

int main()
{   
    // compiler warning as follows
    // warning: ignoring return value of ‘int VeryImportantFunction()’, declared with attribute ‘nodiscard’: ...
    VeryImportantFunction();
    return 0;
}