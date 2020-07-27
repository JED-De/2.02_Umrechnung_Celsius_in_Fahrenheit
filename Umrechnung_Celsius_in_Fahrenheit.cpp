#include <iostream>
using namespace std;
double celsius;
double fahrenheit;

int main()
{
	cout << "Bitte geben Sie die Temperatur in Grad Celsius ein: ? ";
	cin >> celsius;
	fahrenheit = celsius * 1.8 + 32;
	cout << "Die Temperatur in Fahrenheit lautet: " << fahrenheit << endl;
	system("PAUSE");
	return 0;
}