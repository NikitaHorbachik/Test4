#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double a = 0, b = 0, n = 0, h = 0, s = 0, x = 0, r = 0, y = 0, sum = 0;

double inputNumber()
{
	double input;
	while (true)
	{
		cin >> input;
		if (cin.get() == '\n')
		{
			break;
		}
		else
		{
			cin.clear();
			cin.ignore(INT_MAX, '\n');
			cout << "Invalid input.";
		}
	}
	return input;
}

double valueOfY()
{
	double valueOfY;
	valueOfY = exp(x * x) * (1 + 2 * x * x);
	return valueOfY;
}

double valueOfS()
{
	double value_of_s = 0;
	r = value_of_s = 1;
	for (int k = 1; k <= n; ++k)
	{
		r = r * x * x / k;
		value_of_s += r * (2 * k + 1);
	}
	return value_of_s;
}

double valueOfSum()
{
	double value_of_sum;
	value_of_sum = abs(y - s);
	return value_of_sum;
}

void out_Rez()
{
	cout << setw(15) << "x=" << x << "   " << "Y(x)=" << y << "   " << "S(x)=" << s << "   " << "|Y(x)-S(x)|=" << sum << endl;
}

int main()
{
	cout << "Enter a: " << endl;
	a = inputNumber();

	cout << "Enter b:" << endl;
	b = inputNumber();

	while (true)
	{
		cout << "Enter h:" << endl;
		h = inputNumber();
		if (h > 0)
		{
			break;
		}
		else
		{
			cout << "Invalid input." << endl;
		}
	}

	cout << "Enter n:" << endl;
	n = inputNumber();



	if (a > b)
	{
		double swap;
		cout << "Invalid data, a and b are swapped." << endl;
		swap = a;
		a = b;
		b = swap;
	}

	for (x = a; x <= b; x += h)
	{
		s = valueOfS();
		y = valueOfY();
		sum = valueOfSum();
		out_Rez();
	}
	return 0;
}
