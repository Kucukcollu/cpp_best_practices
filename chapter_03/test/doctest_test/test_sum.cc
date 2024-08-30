#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <doctest/doctest.h>

#include "custom_math_lib.hpp"

TEST_CASE("test sum function")
{
    CHECK(custom_math_lib::sum(3,3) == 6);
}