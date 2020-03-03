#pragma once

using namespace std;

#include "Nemandi.h"

#include <random>
#include <time.h>
#include <iostream>
#include <iomanip>


Nemandi::Nemandi()
{
	srand(time(NULL));
	this->id = rand() % rand();
	this->nafn = "";

	afanaNum = 0;
	realAfanaNum = 0;
}


Nemandi::Nemandi(int id, string nafn)
{
	this->id = id;
	this->nafn = nafn;
	afanaNum = 0;
	realAfanaNum = 0;
}


Nemandi::Nemandi(string nafn)
{
	srand(time(NULL));
	id = rand() % rand();
	this->nafn = nafn;
	afanaNum = 0;
	realAfanaNum = 0;
}


Nemandi::~Nemandi()
{
	delete[] afangar;
}


void Nemandi::skraAfanga(int id, string nafn, double einkunn)
{
	if (!afangar)
	{
		afangar = new Afangi[2];

		afangar[0] = Afangi(id, nafn, einkunn);
		afanaNum++;
		realAfanaNum = 2;
	}
	else if (afanaNum == realAfanaNum)
	{
		Afangi* tempAfan = new Afangi[afanaNum + 2];
		realAfanaNum = afanaNum + 2;

		for (size_t i = 0; i < afanaNum; i++)
		{
			tempAfan[i] = afangar[i];
		}

		tempAfan[afanaNum] = Afangi(id, nafn, einkunn);
		afanaNum++;

		delete [] afangar;

		afangar = tempAfan;

	}
	else
	{
		afangar[afanaNum] = Afangi(id, nafn, einkunn);
		afanaNum++;
	}
}


void Nemandi::uppfaeraAfanga(int id, double einkunn)
{
	for (size_t i = 0; i < afanaNum; i++)
	{
		if (afangar[i].getId() == id)
		{
			afangar[i].setEinkunn(einkunn);
		}
	}
}


void Nemandi::eydaAfanga(int tid)
{
	Afangi* tempAfan = new Afangi[realAfanaNum];

	int delNum = 0;

	//				   ↓ this counts where we are in the new array
	for (size_t i = 0, j = 0; i < realAfanaNum; i++)
	{
		if (afangar[i].getId() != tid)
		{
			tempAfan[j] = afangar[i];
			j++;
		}
		else
		{
			delNum++;
		}
	}

	afanaNum -= delNum;

	delete [] afangar;

	afangar = tempAfan;

}


void Nemandi::prenta()
{
	cout << std::setprecision(2);

	cout << "Nemandi: " << nafn << "(id: " << id << "), afangar:" << endl;

	for (size_t i = 0; i < afanaNum; i++)
	{
		cout << "ID: " << afangar[i].getId()
			<< ", nafn: " << afangar[i].getNafn()
			<< ", einkunn: " << afangar[i].getEinkunn() << endl;
	}

	cout << "Medaleinkunn: " << getMedalEinkunn();
}


double Nemandi::getMedalEinkunn()
{
	double avg = 0;

	for (size_t i = 0; i < afanaNum; i++)
	{
		avg += afangar[i].getEinkunn();
	}
	avg /= afanaNum;
	return avg;
}
