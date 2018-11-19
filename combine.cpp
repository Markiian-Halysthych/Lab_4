#include "Combine.h"
#include <iostream>
using namespace std;


void Combine::getSet()
{
	cout << "Input volume(in kilograms): ";
	cin >> v;
	cout << "Input fuel per 1 hectare(in litters): ";
	cin >> fuel;
	cout << "Input engine power(in horsepowers): ";
	cin >> power;
	cout << endl;
}

void Combine::getShow()
{
	cout << "volume(in kilograms): " << v << endl;
	cout << "fuel per 1 hectare(in litters): " << fuel << endl;
	cout << "engine power(in horsepowers): " << power << endl;
}

int main()
{
	setlocale(0, "");

	Combine n1;

	n1.getSet();

	n1.getShow();

	system("pause");
	return 0;
}