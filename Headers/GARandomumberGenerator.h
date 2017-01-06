#include "randomNumberGenerator.h"
#ifndef GARANDOMNUMBERGENERATOR_H
#define GARANDOMNUMBERGENERATOR_H
class  GARandomNumberGenerator :public RandomNumberGenerator{

private:

public:
	GARandomNumberGenerator();
	virtual double generateNumber() const ;

};
#endif