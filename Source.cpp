// Lab_04_4.cpp
// Мельничук Ілля
// Лабораторна робота № 4.4
// Табуляція функції, заданої графіком
// Варіант 15
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	double x, r1, r2, xp, xk, dx, y;
	cout << "r1 = ";
	cin >> r1;
	cout << "r2 = ";
	cin >> r2;
	cout << "xp = ";
	cin >> xp;
	cout << "xk = ";
	cin >> xk;
	cout << "dx = ";
	cin >> dx;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk) {
		if (x <= -6)
			y = r2 / 2;
		else
			if (x >= -6 && x <= 2 * r2)
				y = ((-r2 / 2) * (x + 6) / (-6 + 2 * r2) + r2 / 2);
			else
				if (x >= -2 * r2 && x <= 0)
					y = sqrt(pow(r2, 2) - pow(x + r2, 2));
				else
					if (x >= 0 && x <= 2 * r1)
						y = sqrt(pow(r1, 2) - pow(x - r1, 2));
					else
						y = -r1 * (x - 2 * r1);
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
}