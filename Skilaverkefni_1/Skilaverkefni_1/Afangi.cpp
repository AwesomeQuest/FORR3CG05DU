#pragma once

using namespace std;
#include "Afangi.h"

Afangi::Afangi()
{
	id = -1;
	nafn = "";
	einkunn = 0;
}


Afangi::Afangi(int id, string nafn, double einkunn)
{
	this->id = id;
	this->nafn = nafn;
	this->einkunn = einkunn;
}

string Afangi::getNafn() { return this->nafn; }
int Afangi::getId() { return this->id; }
double Afangi::getEinkunn() { return this->einkunn; }

void Afangi::setId(int id) { this->id = id; }
void Afangi::setNafn(string nafn) { this->nafn = nafn; }
void Afangi::setEinkunn(double einkunn) { this->einkunn = einkunn; }