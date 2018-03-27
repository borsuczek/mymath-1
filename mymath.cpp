#include <cmath>

// The length of the line segment
// a, b - endpoints
// n - the number of segments in the interval <a;b>

double lengthLineSegment(double a, double b, int n, double fun(double))
{


	double dx;
	double dl = 0.0;

	dx = ((b-a))/double(n);

	for (int i=0; i<n; i++)
		dl += sqrt(pow(dx,2.0)+pow(fun(a+(i+1)*dx)-fun(a+i*dx),2.0));

    return dl;
}

// The square root of x
double squareRoot(double x, double epsilon)
{
       double a = x;      // a0

       while ((fabs(a-x/a)) > epsilon)
       {
             a = 0.5*(a+x/a);
       }
       return a;
}

double squareRoot(double x)
{
    double epsilon = 0.000000001;
    double a = x;      // a0

    while ((fabs(a-x/a)) > epsilon)
    {
        a = 0.5*(a+x/a);
    }
    return a;
}

