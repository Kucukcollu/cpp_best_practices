#include <catch2/catch_test_macros.hpp>

#include "custom_math_lib.hpp"

TEST_CASE("2 int sum computed", "[sum]")
{
    REQUIRE( custom_math_lib::sum(3,5) == 8 );
}

TEST_CASE("0 sum computed", "[sum]")
{
    REQUIRE( custom_math_lib::sum(0,0) == 0 );
}

TEST_CASE("1 possitive, 1 negative sum computed", "[sum]")
{
    REQUIRE( custom_math_lib::sum(-3,3) == 0 );
}