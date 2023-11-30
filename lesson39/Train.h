#pragma once
#include <string>
#include <iostream>
#include "Time_.h"
using namespace std;
class Train
{
protected:
	string number;
	Time_ depacture;
	string station;
public:
	Train();
	Train(string number, Time_ depacture, string station);

	bool operator<(const Train& obj)const;

	void setNum(string number);
	void setDepacture(Time_ depacture);
	void setStation(string station);

	string getNum()const;
	Time_ getDepacture()const;
	string getStation()const;

	void show()const;
};

