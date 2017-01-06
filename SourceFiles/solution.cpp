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
	_current_fitness = fitness();
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
	case 0:		//objective function of card problem

	{
		int sum = 0, prod = 1, SUMTARG = 36, PRODTARG=360;

		double scaled_sum_error, scaled_prod_error, combined_error;
		for (int i = 0; i < _solution.size(); i++)
		{
			if (_solution[i] == 0)
			{
				sum += (1 + i);
				
			}
			else
			{
				prod *= (1 + i);
			}
		}

		cout << prod << endl;
		cout << sum<<endl;
		scaled_sum_error = (sum - SUMTARG) ;
		scaled_prod_error = (prod - PRODTARG) ;
		combined_error = std::abs(scaled_sum_error) + std::abs(scaled_prod_error);
		return combined_error;
	}
		
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
