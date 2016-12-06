// Function.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string> 
#include <iostream>

using namespace std;

double power(double a, int c)
{
	double a1 = 1;
	if (c>0)
		for (int i = 0; i < c; i++)
			a1 = a1*a;
	if (c<0)
		for (int i = 0; i < (-c); i++)
			a1 = a1 / a;
	return a1;
}
int main()
{
	double a, b;
        int c;
	cin >> a >> c;
	b = power(a, c); 

	cout << "a^c=" << b << endl;
	system("pause"); 
	return 0;
}
