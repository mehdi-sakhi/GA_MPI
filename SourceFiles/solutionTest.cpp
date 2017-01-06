#include "catch.hpp"
#include "problem.h"
#include "GARandomNumberGenerator.h"
#include "solution.h"
TEST_CASE("constructor +getters  are good","tag3")
{
	int index = 0;//index of card problem objective function
	Problem problem{ index };//
	
	RandomNumberGenerator& random = *new GARandomNumberGenerator();
	Solution solution{ problem, random };

	REQUIRE(&solution.getProblem() !=nullptr);
    
	//random is tested in other tests indirectly

}

TEST_CASE("fitness() && getFitenss() are good", "tag3")
{
	int index = 0;//index of card problem objective function
	Problem problem{ index };
	RandomNumberGenerator& random = *new GARandomNumberGenerator();
	Solution solution{ problem, random };
	REQUIRE(solution.getFitness() != START_FITNESS); 
}

// other tests ...

