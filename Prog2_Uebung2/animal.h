#pragma once

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;


class animal
{
	const int idNum = 0;
	static int currentMaxNumber;

public:
	animal(string tname, int idNum, double startweight, double price);
	~animal();

	double price;
	string birth;
	double weight;
	string name;
	string animalspecies;

	static int getCurrentMaxNumber() {
		return currentMaxNumber;
	}
	static void incCurrentMaxNumber(){
		currentMaxNumber++;
	}
	int getNumber() {
		return idNum;
	}
	virtual void feed(double amount) = 0;
	virtual void articulate() = 0;
};

