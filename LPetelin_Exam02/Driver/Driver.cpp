// Driver.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "PolygonOutput.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "Hello and welcome to Luke Petelin's Exam02 program!" << endl;
	Rectangle rect;
	rect.setValues(4, 5);
	Triangle trgl;
	trgl.setValues(10, 8);

	PolygonOutput output1;
	cout << "\nThe area of the RECTANGLE entered is: ";	
	output1.output(rect.area());
	cout << "\nThe area of the TRIANGLE entered is: ";
	output1.output(trgl.area());
	
	cout << "\n\nThank you for using Luke's Exam program!" << endl;
	
	system("pause");
    return 0;
}

