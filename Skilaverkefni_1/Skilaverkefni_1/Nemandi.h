#pragma once

#include <string>

#include "Afangi.h"

using namespace std;

class Nemandi
{
	int id;
	string nafn;
	Afangi * afangar;
	int afanaNum;
	int realAfanaNum;

public:
	Nemandi();
	Nemandi(int id, string nafn);
	Nemandi(string nafn);
	~Nemandi();
	void skraAfanga(int id, string nafn, double einkunn);
	void uppfaeraAfanga(int id, double einkunn);
	void eydaAfanga(int id);
	void prenta();
	double getMedalEinkunn();
};
