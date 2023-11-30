#include "Table.h"

void Table::addTrain(Train obj)
{
	table.insert(obj);
}

void Table::showTable() const
{
	set<Train>::iterator it;
	for (it = table.begin(); it != table.end(); it++)
	{
		cout << "=============================\n";
		it->show();
		cout << "=============================\n";
	}
}

void Table::searchByNum(string num) const
{
	set<Train>::iterator it;
	for (it = table.begin(); it != table.end(); it++)
	{
		if (it->getNum() == num) {
			it->show();
			return;
		}
	}
	cout << "No one...:(\n";
}

void Table::nearestTrain() const
{
	Time_ now;
	set<Train>::iterator it;
	for (it = table.begin(); it != table.end(); it++)
	{
		if (it->getDepacture() > now) { 
			it->show();
			return;
		}
	}
	cout << "No one...:(\n";
}

void Table::cancelTrain(string num)
{
	set<Train>::iterator it;
	for (it = table.begin(); it != table.end(); it++)
	{
		if (it->getNum() == num) {
			cout << "Train: " << it->getStation() << " Canceled\n";
			table.erase(it);
			return;
		}
	}
	cout << "No one...:(\n";
}

void Table::editDepatrureTime(string num, Time_ time)
{
	set<Train>::iterator it;
	for (it = table.begin(); it != table.end(); it++)
	{
		if (it->getNum() == num) {
			Train copy = *it;
			copy.setDepacture(time);
			table.erase(it);
			table.insert(copy);
			return;
		}
	}
	cout << "No one...:(\n";
}
