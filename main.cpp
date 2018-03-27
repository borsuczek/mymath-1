#include <iostream>
#include <cmath>
#include "mymath.h"

using namespace std;

double funL(double x)
{
	return x*x;
}

int main()
{
	double a, b;	// endpoints
	int n;		    // the number of line segments in the interval <a;b>

    cout << "Give the ends of the line segment (<a;b>): ";
	cin >> a >> b;
	cout << "Give the number n of divisions of the line segments: ";
	cin >> n;

	cout.precision(15);
	cout << "The length of function f(x)=x^2 from " << a << " to " << b << " is equals ";
	cout << fixed << lengthLineSegment(a, b, n, funL) << endl;

	double number;
	cout << "Input number greater than zero: ";
	cin >> number;
	cout << "Square root of " << number << " is equals " << fixed << squareRoot(number) << endl;
	cout << "Square root of " << number << " is equals " << fixed << squareRoot(number,0.1) << endl;

    return 0;
}
