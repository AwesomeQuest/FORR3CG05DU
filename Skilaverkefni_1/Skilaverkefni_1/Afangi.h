#pragma once

#include <string>

using namespace std;

class Afangi
{
	int id;
	string nafn;
	double einkunn;

public:
	Afangi();
	Afangi(int id, string nafn, double einkunn);

	int getId();
	string getNafn();
	double getEinkunn();

	void setId(int id);
	void setNafn(string nafn);
	void setEinkunn(double einkunn);
};
