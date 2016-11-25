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
int main(int argc, char *argv[])
{
	double a, b;
        int c;
	setlocale(LC_ALL, "rus"); 
	if (argc < 3) 
	{
		cout << "Error, parameters in command line is not enough to specify the source data. Press any key to end..." << endl;
		system("pause");
		return 1;
	}
	a = stod(argv[1]);
	c = stoi(argv[2]);

	b = power(a, c); 

	cout << "a^c=" << b;
	system("pause"); 
	return 0;
}