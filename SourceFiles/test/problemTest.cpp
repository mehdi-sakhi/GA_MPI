#include "catch.hpp"
#include "problem.h"
void problem_values_are_good(int index, int lowerLimit, int upperLimit,const Problem& problem)
{
	REQUIRE(problem.getIndex() == index);
	REQUIRE(problem.getLower() == lowerLimit);
	REQUIRE(problem.getUpper() == upperLimit);
}
TEST_CASE("constructor is good","[tag]"){
	Problem p{ 1,2,3 };
	problem_values_are_good(1, 2, 3, p);

}