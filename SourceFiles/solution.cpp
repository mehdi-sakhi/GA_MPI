#include "solution.h"


Solution::Solution(const Problem & problem,const RandomNumberGenerator& randomNumberGenerator) : _problem{ problem },_randomNumberGenerator{randomNumberGenerator}
{
	initialize();
}

void Solution::initialize()
{
	for (int i = 0; i <_problem.getDimension(); i++)
	{
		_solution.push_back(_randomNumberGenerator.generateNumber());
	}
	fitness();
}

const Problem& Solution::pbm() const
{
	return _problem;
}

double Solution::getFitness() const
{
	return _current_fitness;
}

double Solution::fitness()
{
	
	switch (_problem.getIndex())
	{
	case 0: //objective function of card problem
		
		break;

	return 0.0;
	}
}

vector<double>& Solution::getSolution()
{
	return _solution;
}

double& Solution::position(int i)
{
	return _solution[i];
}

void Solution::insert_position(int i, double val)
{
	_solution[i] = val;
}

void Solution::insert(double val)
{
	_solution.push_back(val);
}
