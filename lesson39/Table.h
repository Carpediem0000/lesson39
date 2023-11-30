#pragma once
#include <set>
#include "Train.h"

class Table
{
	set<Train> table;
public:

	void addTrain(Train obj);
	void showTable()const;

	void searchByNum(string num)const;
	void nearestTrain()const;

	void cancelTrain(string num);
	void editDepatrureTime(string num, Time_ time);
};

