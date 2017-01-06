#include "problem.h"

Problem::Problem()
{

}

Problem::Problem(int index):_index{index}
{
}

Problem::Problem(int index, double Low, double Up) : _index{index}, _lowerLimit{Low}, _upperLimit{Up}
{

}

Problem::Problem(const Problem& problem) : _index{ problem.getIndex() }, _lowerLimit{ problem.getLower() }, _upperLimit{ problem.getUpper() }, _dimension{ problem.getDimension() }
{

}

int Problem::getIndex() const
{
	return _index;
}

double Problem::getUpper() const
{
	return _upperLimit;
}

double Problem::getLower() const
{
	return _lowerLimit;
}

int Problem::getDimension() const
{
	return _dimension;
}

void Problem::setIndex(int index)
{
	_index = index;
}

void Problem::setUpper(double upperLimit)
{
	_upperLimit = upperLimit;
}

void Problem::setLower(double lowerLimit)
{
	_lowerLimit = lowerLimit;
}

void Problem::setDimension(int dimension)
{
	_dimension = dimension;
}


