#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "functions_to_implement.cpp"
#include <vector>

TEST_CASE ("SIGN is Computed", "[signFlag]"){
    REQUIRE (Sign(1) == 1);
    REQUIRE (Sign(-1) == -1);
    REQUIRE (Sign(10) == 1);
    REQUIRE (Sign(-10) == -1);
}

TEST_CASE ("SUM is Computed", "[SumFlag]"){
    std::vector<int> v = {1,1,1,1};
    REQUIRE (Sum(v) == 4);
    std::vector<int> v1 = {1,-1,1,-1};
    REQUIRE (Sum(v1) == 0);
    std::vector<int> v2 = {1,2,3,4};
    REQUIRE (Sum(v2) == 10);
    std::vector<int> v3 = {1,100};
    REQUIRE (Sum(v3) == 101);
}

TEST_CASE ("Product is Computed", "[SumFlag]"){
    std::vector<int> v = {1,1,1,1};
    REQUIRE (Product(v) == 1);
    std::vector<int> v1 = {1,-1,1,-1};
    REQUIRE (Product(v1) == 1);
    std::vector<int> v2 = {1,2,3,4};
    REQUIRE (Product(v2) == 24);
    std::vector<int> v3 = {1,100};
    REQUIRE (Product(v3) == 100);
}
