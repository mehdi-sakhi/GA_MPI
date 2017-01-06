#define SIZE 1000
#include "catch.hpp"
#include "GARandomNumberGenerator.h"
#include <vector>
TEST_CASE("abstraction works", "tag2") {
	RandomNumberGenerator * random = new GARandomNumberGenerator();
}

TEST_CASE("polymorphism works", "tag2") {
	RandomNumberGenerator * random = new GARandomNumberGenerator();
	random->generateNumber();

}

TEST_CASE("Number generation is good", "tag2") {
	RandomNumberGenerator * random = new GARandomNumberGenerator();
	double number =random->generateNumber();
	bool condition = (number == 0.0) || (number == 1.0);
	REQUIRE(condition );
}

TEST_CASE("rand seed is good", "tag2") {
	//seed must be initialized in the main function
	std::vector<double> buffer{SIZE};
	RandomNumberGenerator * random = new GARandomNumberGenerator();
	double sum = 0, prod = 1, number;
	
	for (int i = 0; i < SIZE; i++)
	{   
		number = random->generateNumber();
		sum += number;
		prod *= number;
		buffer.push_back(number);
	}

	bool condition = (sum >= 1.0) || (prod == 0.0);
	REQUIRE(condition);
		
}