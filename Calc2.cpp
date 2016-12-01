// Calc2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

double sumary(double a,double b)
{
	return a + b;

}
double differense(double a, double b)
{
	return a - b;

}
double multiplication(double a, double b)
{
	return a * b;

}
double quotient(double a, double b)
{
	return a / b;

}
double power(double a, int c)
{
	double a1=1;
	if (c>0)
	for (int i = 0; i < c; i++)
		a1 = a1*a;
	if (c<0)
	for (int i = 0; i < (-c); i++)
		a1 = a1/a;
	return a1;
}
double squareroot(double a)
{
	double i=0;
		while (i*i < a)
			i = i + 0.000001;
	return i;
}
double absolut(double a)
{
	return ((a >=0) ? a : -a);
}
double roundp(double a)
{
	if (a < 0)
		a = -absolut(a);
	return a;
}
int main()
{
	const double a = -2.5789623, b = 9.35785874;
        const int c= 5;
	cout << "a+b=" << roundp(sumary(a, b)) << endl;
	cout << "a-b=" << roundp(differense(a, b)) << endl;
	cout << "a*b=" << roundp(multiplication(a, b)) << endl;
	if (b==0)
		cout << " Error! Division by zero!" << endl;
	else	
                cout << roundp(quotient(a, b)) << endl;	
	cout << "a^c=" << roundp(power(a, c)) << endl;
	if (a >= 0)
		cout << "Square root of a " << squareroot(a) << endl;
	else
		cout << "Error! Square root of a negative number" << endl;
    return 0;
}

