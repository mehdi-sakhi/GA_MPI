#define START_FITNESS -1 // useful for unit testing
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
	double _current_fitness =START_FITNESS; 
	vector<double> _solution;
	Problem _problem;
	const RandomNumberGenerator& _randomNumberGenerator;
	double 	fitness();

public:
	Solution(const Problem& problem,const RandomNumberGenerator& randomNumberGenerator);
	void initialize();
	double getFitness() const;		
	vector<double>& getSolution();
	const Problem& getProblem() const;
	double& position(int index);
	void  insert_position(int index, double value);
	void insert(double value);
};

#endif
