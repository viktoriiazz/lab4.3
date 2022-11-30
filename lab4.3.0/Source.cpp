#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x,a, b, c, Fp, Fk, dF, F;

	cout << "Fp = "; cin >> Fp;
	cout << "Fk = "; cin >> Fk;
	cout << "dF = "; cin >> dF;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "F" << " |" << endl;
	cout << "---------------------------" << endl;

	x = Fp;
	while (x <= Fk)
	{
		if (x<0 && b != 0)
			F = a * x * x + b * b * x;
		else
			if (x > 0 && b == 0)
				F = x - (a / (x - c));
			else
				F = 1 + (x / c);

		cout << "|" << setw(7) << setprecision(2) << F<< " |" << endl;
		x += dF;
	}
	cout << "---------------------------" << endl;
	return 0;
}