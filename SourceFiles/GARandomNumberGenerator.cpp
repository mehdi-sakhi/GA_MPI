#include "GARandomNumberGenerator.h"
#include<iostream>
#include <ctime>


GARandomNumberGenerator::GARandomNumberGenerator():RandomNumberGenerator()
{
	
}

double GARandomNumberGenerator::generateNumber() const
{
	//50% chance
	if (std::rand() % 10 < 5)
		return 0;
	else
		return 1;
}
