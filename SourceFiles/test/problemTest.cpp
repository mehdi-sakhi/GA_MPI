#include "catch.hpp"
#include "problem.h"
void problem_values_are_good(int index, double lowerLimit, double upperLimit,const Problem& problem)
{
	REQUIRE(problem.getIndex() == index);
	REQUIRE(problem.getLower() == lowerLimit);
	REQUIRE(problem.getUpper() == upperLimit);
}
void values_are_equal(int index, double lowerLimit, double upperLimit, int index2, double lowerLimit2, double upperLimit2)
{
	REQUIRE(index == index2);
	REQUIRE(lowerLimit == lowerLimit2);
	REQUIRE(upperLimit == upperLimit2);
}

TEST_CASE("constructor is good","[tag]"){
	int index = 1;
	double lowerLimit = 2, upperLimit = 3;
	Problem problem{ index,lowerLimit,upperLimit };
	problem_values_are_good(index, lowerLimit, upperLimit, problem);

}

TEST_CASE("copy constructor is good", "[tag]") {
	int index = 1;
	double lowerLimit = 2, upperLimit = 3;
	Problem problem1{ index,lowerLimit,upperLimit };
	Problem problem2{ problem1 };
	problem_values_are_good(index, lowerLimit, upperLimit,problem2);

}



TEST_CASE("setters and getters are good", "[tag]") {

	SECTION("getters are good") {
		int index = 1;
		double lowerLimit = 2, upperLimit = 3;
		Problem problem{ index,lowerLimit,upperLimit };

		int index2 = problem.getIndex();
		double lowerLimit2 = problem.getLower(), upperLimit2 = problem.getUpper();
		values_are_equal(index, lowerLimit, upperLimit, index2, lowerLimit2, upperLimit2);


	}
	SECTION("getters are good") {
		int index = 1, lowerLimit = 2, upperLimit = 3;
		Problem problem{};
		problem.setIndex(index);
		problem.setLower(lowerLimit);
		problem.setUpper(upperLimit);

		int index2 = problem.getIndex();
		double lowerLimit2 = problem.getLower(), upperLimit2 = problem.getUpper();
		values_are_equal(index, lowerLimit, upperLimit, index2, lowerLimit2, upperLimit2);


	}

}