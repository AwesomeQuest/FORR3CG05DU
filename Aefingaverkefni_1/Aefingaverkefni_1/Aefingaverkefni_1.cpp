// Aefingaverkefni_1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;



void lab141() {
	struct math
	{
		static float power(float x, int pow) {
			float out = x;
			for (int i = 1; i < pow; i++)
			{
				out = out * x;
			}

			return out;
		}
	};


	float pi = 3.14159265359;
	float x, y;

	cout << "Enter value for x: ";
	cin >> x;

	float y1, y2;

	y1 = math::power(x, 2) / (math::power(pi, 2) * (math::power(x, 2) + 0.5));
	y2 = 1 + (math::power(x, 2) / (math::power(pi, 2) * math::power((math::power(x, 2) - 0.5), 2)));

	y = y1 * y2;


	cout << "y is equal to: " << y;
}


void lab142() {
	int i, j, k;

	cout << "Enter i: ";
	cin >> i;
	cout << "Enter j: ";
	cin >> j;


	i += 2;
	j -= i;

	k = i / j;
	k += k;
	k--;

	j = k % i;

	k += k + i;
	k += k / j;

	k = k * k * k;
	k += i * j;

	cout << k;
}


void lab161() {
	bool b1, b2, b3, b4;
	bool bTrue;

	int val;

	cout << "Enter a value: ";
	cin >> val;


	b1 = val >= 0 && val < 10;
	b2 = val * 2 < 20 && val > 0;
	b3 = val > 2 && (val / 2) < 10;
	b4 = val == 111;

	bTrue = b1 || b2 || b3 || b4;

	cout << (bTrue ? "THAT'S TRUE :)" : "THAT'S NOT TRUE :(") << endl;
}


void lab171() {
	struct size
	{
		static std::string resize(std::string in, int length) {

			in.resize(length, '0');
			std::string out = in;

			return out;

		}
	};

	string s1, s2, s3, s4, s5;

	cin >> s1;
	cin >> s2;
	cin >> s3;
	cin >> s4;
	cin >> s5;



	cout << size::resize(s1, 3) << endl;
	cout << size::resize(s2, 4) << endl;
	cout << size::resize(s3, 8) << endl;
	cout << size::resize(s4, 4) << endl;
	cout << size::resize(s5, 1) << endl;
}


int main()
{
	
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
