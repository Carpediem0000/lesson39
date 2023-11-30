#include "Train.h"

Train::Train()
{
    this->number = "-";
    this->depacture = Time_();
    this->station = "-";
}

Train::Train(string number, Time_ depacture, string station)
{
    setNum(number);
    setDepacture(depacture);
    setStation(station);
}

bool Train::operator<(const Train& obj) const
{
    return this->depacture < obj.depacture;
}

void Train::setNum(string number)
{
    this->number = number;
}

void Train::setDepacture(Time_ depacture)
{
    this->depacture = depacture;
}

void Train::setStation(string station)
{
    this->station = station;
}

string Train::getNum() const
{
    return number;
}

Time_ Train::getDepacture() const
{
    return depacture;
}

string Train::getStation() const
{
    return station;
}

void Train::show() const
{
    cout << "Number: " << number << endl;
    cout << "Station: " << station << endl;
    cout << "Departure: " << depacture << endl;
}
