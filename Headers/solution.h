#ifndef SOLUTION_H
#define SOLUTION_H

#include <iostream>
#include <cmath>
#include "problem.h"
#include "RandomNumberGenerator.h"
using namespace std;

class Solution
{
private:
	double _current_fitness;
	vector<double> _solution;
	Problem _problem;
	const RandomNumberGenerator& _randomNumberGenerator;

public:
	Solution(const Problem& problem,const RandomNumberGenerator& randomNumberGenerator);
	void initialize();
	double 	fitness();			
	double getFitness() const;		
	vector<double>& getSolution();
	const Problem& pbm() const;
	double& position(int index);
	void  insert_position(int index, double value);
	void insert(double value);
};

#endif
