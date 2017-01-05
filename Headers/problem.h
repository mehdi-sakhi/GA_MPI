#ifndef PROBLEM_H
#define PROBLEM_H

#include <iostream>
#include <vector>

using std::vector;

class Problem
{
private:
	double _lowerLimit, _upperLimit;
	int _index;
	int _dimension;

public:
	Problem();
	Problem(int index, double LowerLimit, double UpperLimit);
	Problem(const Problem& problem);

	int getIndex() const;
	double getUpper() const;
	double getLower() const;
	int getDimension() const;

	void setIndex(int index);
	void setUpper(double upperLimit);
	void setLower(double lowerLimit);
	void setDimension(int dimension);

};

#endif