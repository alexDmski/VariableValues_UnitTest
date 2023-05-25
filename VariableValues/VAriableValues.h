/*
This class has a list of doubles as a field and also different methods : 
getList(), addDouble(double dbl) - inserts a number at the end, 
calculateSum() - calculates the sum of the numbers in the list,
calculateAverage() - calculates the Average of the numbers in the list, 
cleanList() - empties the list.
*/
#pragma once
#include <iostream>
#include <list>

using namespace std;

class VariableValues
{
private:
	list<double> listOfDoubles;

public:

	list<double> getList() { return listOfDoubles; }

	void addDouble(double dbl)
	{
		listOfDoubles.push_back(dbl);
	}

	double calculateSum()
	{
		double sum = 0.0;//accumulator
		for (auto i : listOfDoubles) {
			sum += i;
		}
		return sum;
	}

	double calculateAverage()
	{
		return this->calculateSum() / this->listOfDoubles.size();//Sum divide by the number of elements
	}

	void cleanList()
	{
		listOfDoubles.clear();
	}
};