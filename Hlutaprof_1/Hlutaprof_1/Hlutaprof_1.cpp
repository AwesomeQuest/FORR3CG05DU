// Hlutaprof_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

using namespace std;

class Nemandi
{
public:
	Nemandi() {
		this->numer = 0;
		this->einkun = 0;
		this->nafn = "";
	}
	Nemandi(int numer, string nafn) {
		this->numer = numer;
		this->einkun = 0;
		this->nafn = nafn;
	}
	Nemandi(int numer, double einkun, string nafn) {
		this->numer = numer;
		this->einkun = einkun;
		this->nafn = nafn;
	}

	int getNumer() { return this->numer; }
	double getEinkun() { return this->einkun; }
	string getNafn() { return this->nafn; }

	void setNumer(int numer) { this->numer = numer; }
	void setEinkun(double einkun) { this->einkun = einkun; }
	void setNafn(string nafn) { this->nafn = nafn; }

	void prenta() {
		cout << "Nemandi numer " << this->numer
			<< ", " << this->nafn
			<< ", " << fixed << setprecision(2) << this->einkun << endl;
	}

private:
	int numer;
	string nafn;
	double einkun;
};


int main()
{
	Nemandi nemendurArr[5];

	nemendurArr[0] = Nemandi();
	nemendurArr[1] = Nemandi(2, "geir");
	nemendurArr[2] = Nemandi(3, 6.5, "hrolfur");
	nemendurArr[3] = Nemandi(4, 7.5, "tomas");
	nemendurArr[4] = Nemandi(5, 84.5, "haukur");

	for (int i = 0; i < 5; i++)
	{
		nemendurArr[i].prenta();
	}

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
